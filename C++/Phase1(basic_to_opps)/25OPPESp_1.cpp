//OPPES
/*
#include <iostream>
using namespace std;

class Hero{
    
};

int main()
{
   Hero h1;
   cout<<"size of empty class 1:"<<sizeof(h1)<<endl;

    return 0;
}
*/


/*

#include <iostream>
using namespace std;

class Hero{
    int number;
    char name;
    
    
};

int main()
{
   Hero h1;
   cout<<"size of  not empty class:"<<sizeof(h1)<<endl;

    return 0;
}


*/


/*

#include <iostream>
using namespace std;

class Hero{
    
    //by default it take private
    //acsess modifire
   public:
    
    //properties
    int health;
     
    char level;
    
};

int main()
{
    Hero ankit;
    ankit.health=70;
    ankit.level='A';
    cout<<"health is:"<<ankit.health<<endl;
    cout<<"level is:"<<ankit.level<<endl;
   
   
    return 0;
}
*/








/*
//static allocation
#include <iostream>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char level;
    
    void print(){
        cout<<level<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

    
};


int main()
{
    
//static allocation
Hero ankit;

cout<<"ankit health is:"<<ankit.getHealth()<<endl;

ankit.setHealth(90);
cout<<"ankit health is:"<<ankit.getHealth()<<endl;

ankit.setLevel('A');
cout<<"ankit level is:"<<ankit.getLevel()<<endl;


    return 0;
}

*/









/*
//dynamically allocation
#include <iostream>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char level;
    
    void print(){
        cout<<level<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

    
};


int main()
{
    
//static allocation
Hero a;
cout<<"static allocation"<<endl;
cout<<"a health is:"<<a.getHealth()<<endl;
cout<<"a level is:"<<a.level<<endl;
cout<<endl;
//dynamically allocation
cout<<"dynamically allocation"<<endl;
Hero *b=new Hero;

cout<<"b health is:"<<(*b).getHealth()<<endl;
cout<<"b level is:"<<(*b).level<<endl;

cout<<endl;
cout<<"new way to print dynamically allocation"<<endl;
cout<<"b health is:"<<b->getHealth()<<endl;
cout<<"b level is:"<<b->level<<endl;
    return 0;
}

*/








//using setter
/*
#include <iostream>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char level;
    
    void print(){
        cout<<level<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

    
};


int main()
{
    
//static allocation
Hero a;
a.setHealth(80);
a.setLevel('B');
cout<<"static allocation"<<endl;
cout<<"a health is:"<<a.getHealth()<<endl;
cout<<"a level is:"<<a.level<<endl;
cout<<endl;
//dynamically allocation
cout<<"dynamically allocation"<<endl;
Hero *b=new Hero;
b->setLevel('A');
b->setHealth(100);

cout<<"b health is:"<<(*b).getHealth()<<endl;
cout<<"b level is:"<<(*b).level<<endl;

cout<<endl;
cout<<"new way to print dynamically allocation"<<endl;
cout<<"b health is:"<<b->getHealth()<<endl;
cout<<"b level is:"<<b->level<<endl;
    return 0;
}
*/






/*


//Constructor
//when object crete in main then Constructor called itself
//no returrn type 
//no input parameter
#include <iostream>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char level;
    
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        cout<<"address of this:"<<this<<endl;
        this->level=level;
        this->health=health;
    }
    
    void print(){
        cout<<level<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

    
};


int main()
{
    
 //static allocation   
 Hero a(10);
 cout<<"address of a:"<<&a<<endl;
 a.print();
 
 //dynamically allocation
 Hero *b=new Hero(11);
 b->print();
 
 
 Hero temp(22,'B');
 temp.print();
    return 0;
}

*/













/*

//copy Constructor

#include <iostream>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char level;
    
    Hero(){
        cout<<"default Constructor called"<<endl;
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        this->level=level;
        this->health=health;
    }
    
    //copy Constructor
    Hero(Hero &temp){
        cout<<"copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

    
};


int main()
{
    Hero c(70,'a');
    c.print();
    
    Hero d(c);
    d.print();
 
    return 0;
}


*/











/*
//Shallow and Deep copy
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char *name;
    char level;
    
    Hero(){
        cout<<"default Constructor called"<<endl;
        name=new char[100];
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        this->level=level;
        this->health=health;
    }
    
    //copy Constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        
        cout<<"copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<endl;
        cout<<"Name:"<<this->name<<endl;
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
        cout<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

void setName(char name[]){
    //this->name=name;
    strcpy(this->name,name);
}
    
};


int main()
{
    Hero h;
    h.setHealth(12);
    h.setLevel('D');
    char name[7]="ankit";
    h.setName(name);
    h.print();
    
    //use default copy Constructor
    //or
    //Hero h2=h;
    Hero h2(h);
    h2.print();
    
    h.name[0]='p';
    h.print();
    
    h2.print();
    
    
    return 0;
}


*/

















/*
//Assignment operator
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char *name;
    char level;
    
    Hero(){
        cout<<"default Constructor called"<<endl;
        name=new char[100];
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        this->level=level;
        this->health=health;
    }
    
    //copy Constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        
        cout<<"copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<endl;
        cout<<"Name:"<<this->name<<endl;
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
        cout<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

void setName(char name[]){
    //this->name=name;
    strcpy(this->name,name);
}
    
};


int main()
{
    Hero h;
    h.setHealth(12);
    h.setLevel('D');
    char name[7]="ankit";
    h.setName(name);
   // h.print();
    
    //use default copy Constructor
    //or
    //Hero h2=h;
    Hero h2(h);
   // h2.print();
    
    h.name[0]='p';
    h.print();
    
    h2.print();
    
    h=h2;
    h.print();
    h2.print();
    
    
    return 0;
}

*/









/*
//Destructor
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char *name;
    char level;
    
    Hero(){
        cout<<"default Constructor called"<<endl;
        name=new char[100];
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        this->level=level;
        this->health=health;
    }
    
    //copy Constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        
        cout<<"copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<endl;
        cout<<"Name:"<<this->name<<endl;
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
        cout<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

void setName(char name[]){
    //this->name=name;
    strcpy(this->name,name);
}
    
    
//sestructor
~Hero(){
    cout<<"Destructor called"<<endl;
}
};


int main()
{
   //static
   Hero a;
   
   //dynamec
   Hero *b=new Hero();
   //manually destructor called
   delete b;
    return 0;
}

*/





/*
//static keyword
//no need object creation
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char *name;
    char level;
    static int timeToComplete;
    
    
    Hero(){
        cout<<"default Constructor called"<<endl;
        name=new char[100];
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        this->level=level;
        this->health=health;
    }
    
    //copy Constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        
        cout<<"copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<endl;
        cout<<"Name:"<<this->name<<endl;
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
        cout<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

void setName(char name[]){
    //this->name=name;
    strcpy(this->name,name);
}
    
    
//sestructor
~Hero(){
    cout<<"Destructor called"<<endl;
}
};

int Hero::timeToComplete=5;

int main()
{
    cout<<Hero::timeToComplete<<endl;
    
    Hero a;
    cout<<a.timeToComplete<<endl;
    
    Hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;
   
    return 0;
}

*/


//static function;
//not containt this keyword
//no need object creation
//static function access only static member
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Hero{
    
   private:
   int health;
   
    public:
    char *name;
    char level;
    static int timeToComplete;
    
    
    Hero(){
        cout<<"default Constructor called"<<endl;
        name=new char[100];
    }
    
    Hero(int health){
        this->health=health;
    }
    
    //paramerterised Constructor
    Hero(int health,char level){
        
        this->level=level;
        this->health=health;
    }
    
    //copy Constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        
        
        cout<<"copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    
    void print(){
        cout<<endl;
        cout<<"Name:"<<this->name<<endl;
        cout<<"health:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
        cout<<endl;
    }
    
    
int getHealth(){
    return health;
}

char getLevel(){
    return level;
}

void setHealth(int h){
    health=h;
}

void setLevel(char ch){
    level=ch;
}

void setName(char name[]){
    //this->name=name;
    strcpy(this->name,name);
}

//static function
static int random(){
    //not access because its access static member
   // cout<<health<<endl;
   return timeToComplete;
}
    
    
//sestructor
~Hero(){
    cout<<"Destructor called"<<endl;
}
};

int Hero::timeToComplete=5;

int main()
{
    cout<<Hero::random()<<endl;
   
    return 0;
}



