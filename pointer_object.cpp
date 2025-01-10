// #include <iostream>
// using namespace std;

// class Car{

//     char model[50];
//     int year;
// public:

//     void  setdata(char *inputmodel, int year){
//         int i=0;
//        while (inputmodel[i] !='\0' , i<49){
//         model[i]=inputmodel[i];

//         i++;
//        };
//        model[i]='\0';
//         this->year=year;
//     }
//     void display(){
//         cout<<" Model "<<model<<" year "<<year<<endl;
//     }


// };

// int main(){
//     Car *ptr=new Car;
//     ptr->setdata("honda",2020);
//     ptr->display();



// }


// #include <iostream>
// using namespace std;

// class Book{
//     char title[50];
//     char author[50];

//     void setvalue(char* a, char* b){
//         int i=0;
//         while(a[i]!='\0', i<49){
//             title[i]=a[i];
//             i++;
//         }
//         title[i]='\0';

//          while(b[i]!='\0', i<49){
//             author[i]=b[i];
//             i++;
//         }
//         author[i]='\0';
//     }
//      void display(){
//             cout<<" Title "<<title<<" Author "<<author<<endl;
//         }
// };




// int main(){
//     Book *ptr=new Book;
//     ptr->setvalue("ALi", "Hassan");
//     ptr->display();


// }

#include <iostream>
using namespace std;

class Book {
    char title[50];
    char author[50];

public:
    void setvalue(const char* a, const char* b) {
        int i = 0;

        // Copy title
        while (a[i] != '\0' && i < 49) {
            title[i] = a[i];
            i++;
        }
        title[i] = '\0'; // Null-terminate the title

        i = 0; // Reset index for author
        // Copy author
        while (b[i] != '\0' && i < 49) {
            author[i] = b[i];
            i++;
        }
        author[i] = '\0'; // Null-terminate the author
    }

    void display() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    const int numBooks = 3; // Define the number of books
    Book* books[numBooks]; // Array of pointers to Book objects

    // Dynamically allocate memory for each Book object and set data
    books[0] = new Book;
    books[0]->setvalue("The Great Gatsby", "F. Scott Fitzgerald");

    books[1] = new Book;
    books[1]->setvalue("1984", "George Orwell");

    books[2] = new Book;
    books[2]->setvalue("To Kill a Mockingbird", "Harper Lee");

    // Display details of each book
    for (int i = 0; i < numBooks; i++) {
        cout << "Book " << (i + 1) << ": ";
        books[i]->display();
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < numBooks; i++) {
        delete books[i];
    }

    return 0;
}
