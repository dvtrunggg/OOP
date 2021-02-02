#include <iostream>
#include <string>
using namespace std;

class FullName
{
public:
    virtual void setName(string name) = 0;
    virtual string getName() = 0;
};

class User : public FullName
{
private:
    string mName;

public:
    void setName(string name)
    {
        mName = name;
    }

    string getName()
    {
        return mName;
    }
};

class FirstLastName
{
public:
    virtual void setFirstName(string firstName) = 0;
    virtual void setLastName(string lastName) = 0;
    virtual string getFirstName() = 0;
    virtual string getLastName() = 0;
};

class UserB : public FirstLastName
{
private:
    string mFirstname;
    string mLastname;
public:
    void setFirstName(string firstName)
    {
        mFirstname = firstName;
    }

    void setLastName(string lastName)
    {
        mLastname = lastName;
    }

    string getFirstName()
    {
        return mFirstname;
    }

    string getLastName()
    {
        return mLastname;
    }
};

class Adapter : public FirstLastName
{
private:
    User mUser;
    string mFirstname;
    string mLastname;

public:
    Adapter(User user)
    {
        mUser = user;

        unsigned int splitPostion = user.getName().find_first_of(" ");
        if (splitPostion != string::npos)
        {
            mFirstname = user.getName().substr(0, splitPostion + 1);
            mLastname = user.getName().substr(splitPostion + 1, user.getName().length() - mFirstname.length());
        }
    }

    void setFirstName(string firstName)
    {
        mFirstname = firstName;
    }

    void setLastName(string lastName)
    {
        mLastname = lastName;
    }

    string getFirstName()
    {
        return mFirstname;
    }

    string getLastName()
    {
        return mLastname;
    }
};

int main()
{
    // create User object
    User user;
    user.setName("Trung Dinh Viet");

    // create adapter
    Adapter adapter(user);
    cout << "First name: " << adapter.getFirstName() << endl;
    cout << "Last name: " << adapter.getLastName() << endl;

    return 0;
}
