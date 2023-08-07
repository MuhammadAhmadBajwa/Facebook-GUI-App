#include<fstream>
using namespace std;

class helper
{
public:
	template<class Class>
	static void Add(Class**& ClassObjArr, int& size, Class*& AddClassObj)   //This funciton is adding a new object to already present Array of Class Objects and increasing the size of Array by 1
	{
		Class** temp = new Class * [size + 1];
		for (int i = 0; i < size; temp[i] = ClassObjArr[i], i++);
		temp[size++] = AddClassObj;
		delete[] ClassObjArr;
		ClassObjArr = temp;
	} 
	static void add(char **& arr, int& size, char* element)
	{
		char** temp = new char * [size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[i];
		}
		temp[size++] = element;
		delete[] arr;
		arr = temp;
	}
	static void add(int *& arr, int& size, int element)
	{
		int* temp = new int [size + 1];
		for (int i = 0; i < size; temp[i] = arr[i], i++);
		temp[size++] = element;
		delete[] arr;
		arr = temp;
	}
	template<class Class>
	static void AddAtFirst(Class**& ClassObjArr, int& size, Class*& AddClassObj)
	{
		Class** temp = new Class * [++size];
		temp[0] = AddClassObj;
		for (int i = 1,a=0; i < size; temp[i] = ClassObjArr[a++], i++);
		delete[] ClassObjArr;
		ClassObjArr = temp;
	}
	template<class Class>
	static void deallocate(Class**& arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] != NULL)
				delete[] arr[i];
			arr[i] = NULL;
		}
		delete[] arr;;
		arr = NULL;
	}
	static int StringLen(char* str)
	{
		int size = 0;
		for (; str[size] != '\0'; size++);
		return size;
	}
	static void StringCopy(char* str1, char*& str2)
	{
		int size = StringLen(str1);
		str2 = new char[size + 1];
		for (int i = 0; i < size; str2[i] = str1[i], i++)
			str2[size] = '\0';
	}
	static bool StringCompare(char* str1, char* str2)
	{
		if (str1[0] != str2[0] || StringLen(str1) != StringLen(str2))
			return false;
		for (int i = 0; i < StringLen(str1); i++)
			if (str1[i] != str2[i])
				return false;
		return true;
	}
	static char* CosntCharToChar(const char* str)
	{
		int size = 0;
		for (; str[size] != '\0'; size++);
		char* arr = new char[size + 1];
		for (int i = 0; i < size; arr[i] = str[i], i++);
		arr[size] = '\0';
		return arr;
	}
	static void DeleteCharArray(char*& str)
	{
		if (str != NULL)
			delete str;
		str = NULL;
	}
	static char* Concatenate(char* str1, char* str2)
	{
		int size1 = StringLen(str1), size2 = StringLen(str2);
		char* str = new char[size1 + size2 + 2];
		for (int i = 0, a = 0; i < size1 + size2 + 1; i++)
		{
			if (i < size1)
				str[i] = str1[i];
			else if (i == size1)
				str[i] = ' ';
			else if (i > size1)
				str[i] = str2[a++];
		}
		str[size1 + size2 + 1] = '\0';
		return str;
	}
	static char* ConcatenateWithoutSpace(char* str1, char* str2)
	{
		int size1 = StringLen(str1), size2 = StringLen(str2);
		char* str = new char[size1 + size2 + 1];
		int i = 0;
		for (; i < size1; str[i] = str1[i], i++);
		for (int a = 0; a < size2; str[i++] = str2[a++]);
		str[size1 + size2] = '\0';
		return str;
	}
	static void Concate(char*& str1, char* str2)
	{
		int size1 = StringLen(str1), size2 = StringLen(str2);
		char* str = new char[size1 + size2 + 1];
		int i = 0;
		for (; i < size1; str[i] = str1[i], i++);
		for (int a = 0; a < size2; str[i++] = str2[a++]);
		str[size1 + size2] = '\0';
		delete[] str1;
		str1 = str;
	}
	static char* ConvertToChar(int num)
	{
		int sizeOfNum = 0;
		int TempNum = num;
		for (; num > 0; sizeOfNum++, num /= 10);
		char* str = new char[sizeOfNum + 1];
		num = TempNum;
		for (int i = sizeOfNum - 1; i >= 0; str[i] = num % 10 + '0', num /= 10, i--);
		str[sizeOfNum] = '\0';
		return str;
	}
	
};
class id
{
	char* ID;
public:
	id()
	{
		ID = NULL;
	}
	id(char* id)
	{
		helper::StringCopy(id, ID);
	}
	char* getID()
	{
		return ID;
	}
	virtual char* getName()
	{
		return NULL;
	}
	virtual ~id()
	{
		helper::DeleteCharArray(ID);
	}
};
class date {
	int d, m, y;

public:
	date(int d = 0, int m = 0, int y = 0)
	{
		this->d = d;
		this->m = m;
		this->y = y;
	}
	void getDate(int& Day, int& Month, int& Year) const
	{
		Day = d;
		Month = m;
		Year = y;
	}
	static date getCurrentDate() 
	{
		date CurrentDate(15, 11, 2017);
		return CurrentDate;
	}
	void setDate(int day, int month, int year)
	{
		d = day;
		m = month;
		y = year;
	}
	static bool CompareDayAndMonth(const date& obj)
	{
		if (15 == obj.d && 11 == obj.m)
			return true;
		return false;
	}
	friend ostream& operator <<(ostream& out, const date& obj)
	{
		out << "(" << obj.d << "/" << obj.m << "/" << obj.y << ")";
		return out;
	}
	bool operator ==(const date& obj)
	{
		if (d == obj.d && m == obj.m && y == obj.y)
			return true;
		else
			return false;
	}
	int operator -(const date& obj)
	{
		return (y - obj.y);
	}
	date* operator --()
	{
		date* newDate = NULL;
		if (d > 1)
		{
			newDate = new date((d - 1), m, y);
		}
		else if (d == 1)
		{
			if (m > 1)
			{
				if (m == 5 || m == 7 || m == 10 || m == 12)
					newDate = new date(30, m - 1, y);
				else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 12)
					newDate = new date(31, m - 1, y);
				else if (m == 3)
				{
					if (y % 4 == 0)
						newDate = new date(29, m - 1, y);
					else
						newDate = new date(28, m - 1, y);
				}
			}
			else if (m == 1)
			{
				newDate = new date(31, 12, y - 1);
			}
		}
		return newDate;
	}
};
class user;
class post;
class comments : public id
{
	id* CommentBy;
	char* CommentText;
public:
	comments(char* CommentID, id* commentBy, char* Text) :id(CommentID)
	{
		CommentBy = commentBy;
		helper::StringCopy(Text, CommentText);
	}
	char* getCommentText()
	{
		return CommentText;
	}
	char* getCommentSharedBy()
	{
		return CommentBy->getName();
	}
	/*friend ostream& operator <<(ostream& out, const comments& obj)
	{
		if (obj.CommentText)
		{
			out << obj.CommentBy->getName();
			out << " wrote :  \"" << obj.CommentText << "\"";
			return out;
		}
		else
			cout << "No Comments Added Yet" << endl;
		return out;
	}*/
	~comments()
	{
		helper::DeleteCharArray(CommentText);
		CommentBy = NULL;
	}
};
class activity
{
	int Type;
	char* Value;
public:
	activity(int type, char* value)
	{
		Type = type;
		helper::StringCopy(value, Value);
	}
	~activity()
	{
		helper::DeleteCharArray(Value);
	}
	char* getActivityText()
	{
			char* activityType = NULL;
		switch (Type)
		{
		case 1:
			if (activityType)
				delete[] activityType;
			activityType = helper::CosntCharToChar("is feeling ");
			return helper::Concatenate(activityType, Value);
			break;
		case 2: 
			if(activityType)
				delete[] activityType;
			activityType = helper::CosntCharToChar("is thinking about ");
			return helper::Concatenate(activityType, Value);
		   break;
		case 3: 
			if (activityType)
				delete[] activityType;
			activityType = helper::CosntCharToChar("is making ");
			return helper::Concatenate(activityType, Value);
	          break;
		case 4:  
			if (activityType)
				delete[] activityType;
			activityType = helper::CosntCharToChar("is celebrating ");
			return helper::Concatenate(activityType, Value);
		      break;
		}
		if (activityType)
			delete[] activityType;
	}

};
class post : public id
{
	char* PostText;
	int PostTotalLikes;
	id** PostLikedBy;
	id* PostSharedBy;
	date PostShareDate;
	activity* PostActivity;
	comments** PostComments;
	int PostTotalComments;
public:
	post(char* ID = NULL, char* text = NULL, date shareDate = NULL) :id(ID)
	{
		PostShareDate = shareDate;
		helper::StringCopy(text, PostText);
		PostTotalLikes = 0;
		PostTotalComments = 0;
		PostLikedBy = NULL;
		PostSharedBy = NULL;
		PostActivity = NULL;
		PostComments = NULL;
	}
	char* GetActivityText()
	{
		char* Text = PostActivity->getActivityText();
		return Text;
	}
	void AddActivity(activity* Activity)
	{
		PostActivity = Activity;
	}
	void AddSharedBy(id* SharedBy)
	{
		PostSharedBy = SharedBy;
	}
	void AddLikedBy(id* LikedBy)
	{
		bool found = false;
		for (int i = 0; i < PostTotalLikes; i++)
		{
			if (LikedBy == PostLikedBy[i])
				found = true;
		}
		    if(!found)
		helper::Add(PostLikedBy, PostTotalLikes, LikedBy);
	}
	void AddComments(comments* Comments)
	{
		helper::Add(PostComments, PostTotalComments, Comments);
	}
	void AddCommentAtFirst(comments* Comments)
	{
		helper::AddAtFirst(PostComments, PostTotalComments, Comments);
	}
	id** getLikeBy()
	{
		return PostLikedBy;
	}
	char* getPostText() const
	{
		return PostText;
	}
	int getPostTotalComments()  const
	{
		return PostTotalComments;
	}
	int getPostTotalLikes()   const
	{
		return PostTotalLikes;
	}
	date getPostShareDate()  const
	{
		return PostShareDate;
	}
	id* getPostSharedBy()  const
	{ 
		return PostSharedBy;
	}
	char* GetPostSharedBy()  const
	{
		return PostSharedBy->getName();
	}
	bool checkActivity()
	{
		if (PostActivity == NULL)
			return false;
		return true;
	}
	void OutputPostData(char**&SharedByName,char**& ActivityText, char**& PostText, int*& NoOfLikes, int*& NoOfComments,int& d, int & m, int&y,comments***&Comments,int& n1,int& n2,int& n3,int& n4,int& n5,int& n6) const
	{
		//static int n1 = 0, n2 = 0, n3 = 0, n4 = 0,n5=0;
		if (this->PostActivity)
			helper::add(ActivityText, n1, this->PostActivity->getActivityText());
		else
			helper::add(ActivityText, n1, NULL);
			helper::add(PostText, n2, this->PostText);
			helper::add(NoOfLikes, n3, this->PostTotalLikes);
			helper::add(NoOfComments, n4, this->PostTotalComments);
			helper::add(SharedByName, n6, this->PostSharedBy->getName());
			if (PostTotalComments > 0)
			{
				comments*** temp = new comments**[n5 + 1];
		        for (int i = 0; i < n5; temp[i] = Comments[i], i++);
				temp[n5] = PostComments; 
				n5++;
				delete[] Comments;
				Comments = temp;
			}
			else
			{
				comments*** temp = new comments * *[n5 + 1];
				for (int i = 0; i < n5; temp[i] = Comments[i], i++);
				temp[n5] = NULL;
				n5++;
				delete[] Comments;
				Comments = temp;
			}
			PostShareDate.getDate(d, m, y);
	}
	void OutputPostComments(int & NoOfComments, comments**& Comments) const
	{
		NoOfComments = PostTotalComments;
		Comments = PostComments;
	}
	~post()
	{
		helper::DeleteCharArray(PostText);
		if (PostLikedBy)
			delete[] PostLikedBy;
		if (PostComments)
			delete[] PostComments;
		PostLikedBy = NULL;
		PostSharedBy = NULL;
		PostComments = NULL;
	}
};
class page : public id
{
	char* title;
	int NoOfPostsInTimeline;
	post** Timeline;
public:
	page(char* PageID, char* title) :id(PageID)
	{
		helper::StringCopy(title, this->title);
		Timeline = NULL;
		NoOfPostsInTimeline = 0;
	}
	void AddPostToPageTimeline(post* Post)
	{
		helper::Add(Timeline, NoOfPostsInTimeline, Post);
	}
	int GetNoOfPostsInTimeline()
	{
		return NoOfPostsInTimeline;
	}
	~page()
	{
		helper::DeleteCharArray(title);
		if (Timeline)
			delete[] Timeline;
		Timeline = NULL;
	}
	char* getName()
	{
		return title;
	}
	post** getTimeline()
	{
		return Timeline;
	}
	int getNoOfPostsInTimeline()
	{
		return NoOfPostsInTimeline;
	}
	void OuputHomePagePosts(post**& LikePagesHomePost, int& NoOfPosts) const
	{
		for (int i = 0; i < NoOfPostsInTimeline; i++)
			if ((Timeline[i]->getPostShareDate()) == date::getCurrentDate() || (Timeline[i]->getPostShareDate()) == *--date::getCurrentDate())
				helper::Add(LikePagesHomePost, NoOfPosts, Timeline[i]);
	}
};
class user : public id {
private:
	char* First;
	char* Last;
	char* Name;
	post** Timeline;
	user** Friends;
	int NoOfPostsInTimeline;
	page** LikedPages;
	int NoOfFriends;
	int NoOfLikedPages;
public:
	user()
	{
		First = NULL;
		Last = NULL;
		Name = NULL;
		Friends = NULL;
		LikedPages = NULL;
		Timeline = NULL;
		NoOfPostsInTimeline = 0;
		NoOfFriends = 0;
		NoOfLikedPages = 0;
	}
	user(char* UserID, char* Fname, char* Lname) :id(UserID)
	{
		helper::StringCopy(Fname, First);
		helper::StringCopy(Lname, Last);
		Name = helper::Concatenate(Fname, Lname);
		Friends = NULL;
		LikedPages = NULL;
		Timeline = NULL;
		NoOfPostsInTimeline = 0;
		NoOfFriends = 0;
		NoOfLikedPages = 0;
	}
	post** getTimeline()
	{
		return Timeline;
	}
	 int getNoOfPostsInTimeline()
	{
		return NoOfPostsInTimeline;
	}
	int getNoOfFriends()
	{
		return NoOfFriends;
	}
	int getNoOfLikedPages()
	{
		return NoOfLikedPages;
	}
	page** getLikedPages()
	{
		return LikedPages;
	}
	bool checkLikePages(page* Likepage)
	{
		for (int i = 0; i < NoOfLikedPages; i++)
			if (Likepage == LikedPages[i])
				return true;
		return false;
	}
	bool checkFriends(user* Friend)
	{
		for (int i = 0; i < NoOfFriends; i++)
			if (Friend == Friends[i] || Friend== this)
				return true;
		return false;
	}
	void SetLikedPages(page* Likedpage)  //same code (REPITION OF CODE)  so I have put the code in the template 
	{
		helper::Add(LikedPages, NoOfLikedPages, Likedpage);
	}
	void SetFriend(user* Friend)   //same code (REPITION OF CODE)  so I have put the code in the template 
	{
		helper::Add(Friends, NoOfFriends, Friend);
	}
	user** getFriends()
	{
		return Friends;
	}
	char* getName()
	{
		return Name;
	}
	char* GetUserID()
	{
		return getID();
	}
	void AddPostToUserTimeline(post* Post)
	{
		helper::Add(Timeline, NoOfPostsInTimeline, Post);
	}
	void AddMemoryToUserTimeline(post* Post)
	{
		NoOfPostsInTimeline++;
		post** temp = new post * [NoOfPostsInTimeline];
		temp[0] = Post;
		for (int i = 1, a = 0; i < NoOfPostsInTimeline; i++)
			temp[i] = Timeline[a++];
		delete[] Timeline;
		Timeline = temp;
	}
	void OuputHomePagePosts(post**& HomePost, int& NoOfPosts)  const
	{
		bool PostFound = false;
			for (int i = 0; i < NoOfFriends; i++)
			{
				
				if (Friends[i])
				{
					int n = Friends[i]->NoOfPostsInTimeline;
					for (int j = 0; j < n; j++)
					{
						if ((Friends[i]->Timeline[j]->getPostShareDate()) == date::getCurrentDate() || (Friends[i]->Timeline[j]->getPostShareDate()) == *--date::getCurrentDate())
						{
							helper::Add(HomePost,NoOfPosts, Friends[i]->Timeline[j]);
						}
					}
				}
			}
			for (int i = 0; i < NoOfLikedPages; i++)
			{
				LikedPages[i]->OuputHomePagePosts(HomePost, NoOfPosts);
			}
	}
	
	~user()
	{
		helper::DeleteCharArray(First);
		helper::DeleteCharArray(Last);
		helper::DeleteCharArray(Name);
		////This destuctor is deleting this Present user so user's Friends(That are also users) and Liked Pages can still exist that's why i have not delete Friends[i] and delete[i] LikedPages.
		if (Friends != NULL)
			delete[] Friends;
		if (LikedPages != NULL)
			delete[] LikedPages;
		Friends = NULL;
		LikedPages = NULL;
	}
};
class app
{
	user** Users;
	page** Pages;
	post** Posts;
	comments** Comments;
	int NoOfUsers;
	int NoOfPages;
	int NoOfPosts;
	int NoOfComments;
public:
	app()
	{
		Users = NULL;
		Pages = NULL;
		Posts = NULL;
		Comments = NULL;
		NoOfUsers = 0;
		NoOfPages = 0;
		NoOfPosts = 0;
		NoOfComments = 0;
	}
	user* SearchUser(char* ID) //same code
	{
		for (int i = 0; i < NoOfUsers; i++)
		{
			if (helper::StringCompare(ID, Users[i]->getID()))
				return Users[i];
		}
		return 0;
	}
	page* SearchPage(char* ID)   //same code
	{
		for (int i = 0; i < NoOfPages; i++)
		{
			if (helper::StringCompare(ID, Pages[i]->getID()))
				return Pages[i];
		}
		return 0;
	}
	post* SearchPost(char* ID)  //same code
	{
		for (int i = 0; i < NoOfPosts; i++)
		{
			if (helper::StringCompare(ID, Posts[i]->getID()))
				return Posts[i];
		}
		return 0;
	}
	void ReadPageData()
	{
		ifstream FileInput;
		FileInput.open("Pages.txt");
		FileInput >> NoOfPages;
		Pages = new page * [NoOfPages];
		char PageID[8] = { '\0' }, PageName[64] = { '\0' };
		for (int i = 0; i < NoOfPages; i++)
		{
			FileInput >> PageID;
			FileInput.getline(PageName, 64);
			Pages[i] = new page(PageID, PageName);
		}
		FileInput.close();
	}
	void ReadUserData()
	{
		char TempBuffer[32] = { '\0' };
		char end[] = "-1";
		ifstream FileInput;
		FileInput.open("Users.txt");
		FileInput >> NoOfUsers;
		Users = new user * [NoOfUsers];
		char* ID = NULL, * First = NULL, * Last = NULL;
		for (int i = 0; i < NoOfUsers; i++)
		{
			FileInput >> TempBuffer;
			helper::StringCopy(TempBuffer, ID);
			FileInput >> TempBuffer;
			helper::StringCopy(TempBuffer, First);
			FileInput >> TempBuffer;
			helper::StringCopy(TempBuffer, Last);
			Users[i] = new user(ID, First, Last);
			TempBuffer[0] = NULL;
			for (; !(helper::StringCompare(TempBuffer, end)); FileInput >> TempBuffer);     //Ignoring the Liked Page Data 
			// !(helper::StringCompare(TempBuffer, end)); -> This function return true if TempBuffer == -1 
			//  and after ! operation it become false and the loop ends .
			TempBuffer[0] = NULL;
			for (; !(helper::StringCompare(TempBuffer, end)); )
			{
				FileInput >> TempBuffer;
				if (helper::StringCompare(TempBuffer, end))
					break;
				page* TempPtr = SearchPage(TempBuffer);
				if (TempPtr)
					Users[i]->SetLikedPages(TempPtr);
				TempBuffer[0] = NULL;
			}
			helper::DeleteCharArray(ID);
			helper::DeleteCharArray(First);
			helper::DeleteCharArray(Last);
		}
		FileInput.close();
		FileInput.open("Users.txt");
		FileInput >> TempBuffer;
		for (int i = 0; i < NoOfUsers; i++)
		{
			for (int j = 0; j < 3; j++)
				FileInput >> TempBuffer;

			TempBuffer[0] = NULL;
			for (; !(helper::StringCompare(TempBuffer, end)); )
			{
				FileInput >> TempBuffer;
				if (helper::StringCompare(TempBuffer, end))
					break;
				if (SearchUser(TempBuffer))
					Users[i]->SetFriend(SearchUser(TempBuffer));
			}
			TempBuffer[0] = NULL;
			for (; !(helper::StringCompare(TempBuffer, end)); FileInput >> TempBuffer);              //Ignoring  Data 
		}
		FileInput.close();
	}
	void ReadPostData()
	{
		char temp[256];
		char end[] = "-1";
		int PostType = 0;
		ifstream FileInput;
		FileInput.open("Posts.txt");
		FileInput >> NoOfPosts;
		Posts = new post * [NoOfPosts];
		int d = 0, m = 0, y = 0;
		char* PostID = NULL, * PostText = NULL;
		for (int i = 0; i < NoOfPosts; i++)
		{
			FileInput >> PostType;
			FileInput >> temp;
			helper::StringCopy(temp, PostID);
			FileInput >> d >> m >> y;
			date PostShareDate(d, m, y);
			FileInput.ignore();
			FileInput.getline(temp, 256);
			helper::StringCopy(temp, PostText);
			Posts[i] = new post(PostID, PostText, PostShareDate);;
			if (PostType == 2)
			{
				int ActivityType = 0;
				FileInput >> ActivityType;
				FileInput.getline(temp, 256);
				activity* obj = new activity(ActivityType, temp);
				Posts[i]->AddActivity(obj);
			}
			FileInput >> temp;
			if (temp[0] == 'u')
			{
				user* UserID = SearchUser(temp);
				if (UserID)
				{
					Posts[i]->AddSharedBy(UserID);
					UserID->AddPostToUserTimeline(Posts[i]);
				}
			}
			else if (temp[0] == 'p')
			{
				page* PageID = SearchPage(temp);
				if (PageID)
				{
					Posts[i]->AddSharedBy(PageID);
					PageID->AddPostToPageTimeline(Posts[i]);
				}
			}
			FileInput >> temp;
			for (; !helper::StringCompare(temp, end); )
			{
				if (temp[0] == 'u')
				{
					user* User = SearchUser(temp);
					if (User)
					{
						Posts[i]->AddLikedBy(User);
					}
				}
				else if (temp[0] == 'p')
				{
					page* Page = SearchPage(temp);
					if (Page)
					{
						Posts[i]->AddLikedBy(Page);
					}
				}
				FileInput >> temp;
			}
			helper::DeleteCharArray(PostID);
			helper::DeleteCharArray(PostText);
		}
		FileInput.close();
	}
	void ReadCommentsData()
	{
		char temp[512];
		char* CommentID = NULL, * SharedByID = NULL, * CommentText = NULL, * postID;
		ifstream FileInput;
		FileInput.open("Comments.txt");
		FileInput >> NoOfComments;
		Comments = new comments * [NoOfComments];
		for (int i = 0; i < NoOfComments; i++)
		{
			FileInput >> temp;
			helper::StringCopy(temp, CommentID);
			FileInput >> temp;
			helper::StringCopy(temp, postID);
			FileInput >> temp;
			helper::StringCopy(temp, SharedByID);
			FileInput.ignore();
			FileInput.getline(temp, 512);
			if (SharedByID[0] == 'u')
				Comments[i] = new comments(CommentID, SearchUser(SharedByID), temp);
			else if (SharedByID[0] == 'p')
				Comments[i] = new comments(CommentID, SearchPage(SharedByID), temp);
			post* obj = SearchPost(postID);
			if (obj)
				obj->AddComments(Comments[i]);
			helper::DeleteCharArray(CommentID);
			helper::DeleteCharArray(SharedByID);
			helper::DeleteCharArray(postID);
		}
		FileInput.close();
	}
	user* SetUser(char* id)
	{
		if (SearchUser(id))
			return SearchUser(id);
		return 0;

	}
	void LikePost(post* ID, user* CurrentSetUser)
	{
			ID->AddLikedBy(CurrentSetUser);
	}
	void PostComment(post* ID, const char* Text, user* CurrentSetUser)
	{
		char c[] = "c";
		char* CommentText = helper::CosntCharToChar(Text);
		char* CommentID = helper::ConcatenateWithoutSpace(c, helper::ConvertToChar(NoOfComments + 1));
		comments* NewComment = NULL;
		NewComment = new comments(CommentID, CurrentSetUser, CommentText);
		ID->AddCommentAtFirst(NewComment);
		helper::Add(Comments, NoOfComments, NewComment);
		helper::DeleteCharArray(CommentText);
		helper::DeleteCharArray(CommentID);
	}
	void LoadAllData()
	{
		ReadPageData();
		ReadUserData();
		ReadPostData();
		ReadCommentsData();
	}
	~app()
	{
		if (Users != NULL)
			helper::deallocate(Users, NoOfUsers);
		if (Pages != NULL)
			helper::deallocate(Pages, NoOfPages);
		if (Comments != NULL)
			helper::deallocate(Comments, NoOfComments);
		if (Posts != NULL)
			helper::deallocate(Posts, NoOfPosts);
	}
};
