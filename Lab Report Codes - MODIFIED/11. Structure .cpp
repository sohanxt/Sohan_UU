#include <iostream>
#include<cstring>

using namespace std;

 struct books{
     char title[100];
     char author[50];
     char subject[200];
     int book_id;
 };
int main() {
   struct books book1;
   struct books book2;
   strcpy(book1.title, "DataStructure");
   strcpy(book1.author, "A");
   strcpy(book1.subject, "DSA");
   book1.book_id = 1001;

   strcpy(book2.title, "Database");
   strcpy(book2.author, "B");
   strcpy(book2.subject, "DBMS");
   book2.book_id = 2001;

   cout<<"book1 title: "<< book1.title<<endl;
   cout<<"book1 author: "<< book1.author<<endl;
   cout<<"book1 subject: "<< book1.subject<<endl;
   cout<<"book1 id: "<< book1.book_id<<endl;

    cout<<"book2 title: "<< book2.title<<endl;
   cout<<"book2 author: "<<book2.author<<endl;
   cout<<"book2 subject: "<< book2.subject<<endl;
   cout<<"book2 id: "<< book2.book_id<<endl;


}