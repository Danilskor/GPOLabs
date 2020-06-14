#pragma once
#include "User.h"
#include "Post.h"

class PaidUser : public User
{
private:
	Post* _posts;
	int _postsCount;

public:
	PaidUser(int id, string login, string password, Post* posts, int postsCount);
	PaidUser(int id, string login, string password);

	void SetPosts(Post* posts, int postsCounter);

	Post* GetPosts();
	int GetPostsCount();

	~PaidUser();
};