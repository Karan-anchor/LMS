#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookID;
    string title;
    string author;
    int quantity;
};

void addBook(Book library[], int &count);
void displayBook(const Book library[], int count);
void searchBook(const Book library[], int &count);
void updateBook(Book library[], int &count);
void deleteBook(Book library[], int &count);

int main()
{
    const int maxBook = 100;
    Book library[maxBook];

    int count = 0;
    int choice;

    cout << "======== Welcome to Library Management System =======\n";

    do
    {
        cout << "\nMenu\n";
        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book Information\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook(library, count);
            break;
        case 2:
            displayBook(library, count);
            break;
        case 3:
            searchBook(library, count);
            break;
        case 4:
            updateBook(library, count);
            break;
        case 5:
            deleteBook(library, count);
            break;
        case 6:
            cout << "Exiting the system. Goodbye!\n";
            break;
        default:
            cout << "Invalid Choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}

// Add a new book
void addBook(Book library[], int &count)
{
    cout << "Enter Book ID: ";
    cin >> library[count].bookID;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, library[count].title);

    cout << "Enter Author Name: ";
    getline(cin, library[count].author);

    cout << "Enter Quantity: ";
    cin >> library[count].quantity;

    cout << "Book Added Successfully.\n";
    count++;
}

// Display all books
void displayBook(const Book library[], int count)
{
    if (count == 0)
    {
        cout << "No books available.\n";
        return;
    }

    cout << "List of Books:\n";
    for (int i = 0; i < count; i++)
    {
        cout << "--------------------------------------------\n";
        cout << "Book ID: " << library[i].bookID << endl;
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "Quantity: " << library[i].quantity << endl;
        cout << "--------------------------------------------\n";
    }
}

// Search for a book
void searchBook(const Book library[], int &count)
{
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (library[i].bookID == id)
        {
            cout << "--------------------------------------------\n";
            cout << "Book ID: " << library[i].bookID << endl;
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            cout << "Quantity: " << library[i].quantity << endl;
            cout << "--------------------------------------------\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

// Update a book
void updateBook(Book library[], int &count)
{
    int id;
    cout << "Enter Book ID to update: ";
    cin >> id;
    cin.ignore(); 

    for (int i = 0; i < count; i++)
    {
        if (library[i].bookID == id)
        {
            cout << "Enter New Title: ";
            getline(cin, library[i].title);

            cout << "Enter New Author: ";
            getline(cin, library[i].author);

            cout << "Enter New Quantity: ";
            cin >> library[i].quantity;

            cout << "Book updated successfully.\n";
            return;
        }
    }

    cout << "Book not found.\n";
}

// Delete a book
void deleteBook(Book library[], int &count)
{
    int id;
    cout << "Enter Book ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (library[i].bookID == id)
        {
            // Shift remaining books left
            for (int j = i; j < count - 1; j++)
            {
                library[j] = library[j + 1];
            }
            count--;
            cout << "Book deleted successfully!\n";
            return;
        }
    }

    cout << "Book not found.\n";
}
