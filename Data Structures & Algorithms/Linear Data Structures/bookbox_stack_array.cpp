#include <iostream>

using namespace std;
#define MAX 5


class BookBox {
private:
    int top{-1};
    int box[MAX];
public:
    BookBox(){}
    void insertBook(int item);
    int removeBook();
    void displayBox();


};

void BookBox::insertBook(int item) {

    if(top >= MAX -1) {
        cout << "ERROR: The box is full." << endl;
    } else {
        top++;
        box[top] = item;
        cout << item << " has been inserted successfully." << endl;
    }
}

int BookBox::removeBook() {
    if(top <= -1) {
        cout << "ERROR: The box is empty." << endl;
        return -1;
    } else {
        cout << box[top] << " has been deleted." << endl;
        top--;
        return top;
    }

}

void BookBox::displayBox() {
    if(top >= 0) {
        cout << "Books currently in the box are: ";
        for(int i = top; i >= 0; i-- ) {
            cout << box[i] << " ";
        }
    } else {
        cout << "ERROR: The box is empty." << endl;
    }


}

void displayChoice() {
cout << "Please make a selection:" << endl;
cout << "1. Insert a book" << endl;
cout << "2. Delete a book" << endl;
cout << "3. Display contents of box" << endl;
cout << "4. Exit" << endl;
}

int main() {

    BookBox box;
    int bookNo;
    char choice;

    do {
    displayChoice();
    cin >> choice;
    if(choice == '1') {
        cout << "Enter the book number: " << endl;
        cin >> bookNo;
        box.insertBook(bookNo);
    }
    if(choice == '2') {
        box.removeBook();
    }
    if( choice == '3') {
        box.displayBox();
    }
    if (choice == '4') {
        break;
    }


    } while (true);

    cout << "Thank you.";
    return 0;
}
