#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <ios>
#include <limits>
#include <typeinfo>
#include <sstream>
#include <vector>
#include <cstring>
using namespace std;

struct Book
{
    string bookId;
    string bookTitle;
    string bookAuthor;
    string bookCategory;
    string bookPublisher;
    string bookEdition;
    string bookPrice;
    string bookRating;
    string numPeopleRating;
    string ISBN;
};

struct Member
{
    string username;
    string password;
};

struct Order
{
    string username;
    string orderStatus;
    string address;
    vector<string> bookId;
    vector<string> bookTitle;
    vector<string> quantity;
};

struct Cart
{
    vector<string> bookId;
    vector<string> bookTitle;
    vector<string> quantity;
    float totalPrice;
};

struct Gift
{
    string bookISBN;
    string bookTITLE;
    string date;
    string fineUserName;
    string day;
    string month;
    string year;
    string bookstore;
    string receiver;
    string address;
    string message;
    string bookPRICE;
};

int getUserChoices();

bool isBackHomePage(int);

bool isBackPreviousPage(int);

bool isPurchaseBooks(int);

bool isBorrowBooks(int);

void getAccountData(Member[], int &);

void getOrderData(Order[], int &);

bool logoutAccount(bool &, bool &, Cart[], const int &, string &, bool &);

void displayAccountStatus(string &, Member[], const int, Order[], const int);

void checkAccountStatusOption();

int checkAccountStatusResult(bool &, int, bool &);

int checkAccountStatus(string &, bool &, Member[], int &, const int, Order[], const int);

void accountHomeMenuHeader(string loginUserName);

int accountHomeMenuResult(int, int &, bool &);

int accountHomeMenu(string);

void displayLoginMenuHeader();

void getLoginData(string &, string &);

int checkLoginAccount(string &, string &, string &, bool &, bool &, Member[], const int);

void loginMenuOption();

int loginMenuResult(int, int &, bool &, bool &);

int loginMenu(Member[], bool &, string &, const int);

void displayRegistrationMenuHeader();

void getRegistrationData(string &, string &);

int checkRegisterAccount(string &, const int, Member[], bool &);

void registerMenuOption();

int registerMenuResult1(int, int &, bool &, bool &);

int registerMenuResult2(int, int &, bool &, bool &);

int registerMember(Member[], int &, string &, string &, string &, bool &);

int registerMenu(Member[], int &, bool &, string &, const int);

void registerOrLoginMenuHeader();

int registerOrLoginMenuResult(int, int &, bool &);

int registerOrLoginMenu();

void getBookData(int, Book[], const int);

void searchAndBookListHeader();

void displayBooks(Book[], const int);

void displayAllBookOption();

int displayAllBookResult(int, int &, bool &, bool &);

int displayAllBook(Book[], bool &, const int);

void getUserSearchBookByTitle(string &);

void stringToUpperCase(string &);

void displaySearchBookByTitle(Book[], const int, string &, int &);

void searchTitle_Author_Category_Publisher_Price_RatingOption();

int searchBookByTitleResult(int, bool &, int &, bool &);

int searchBookByTitle(Book[], bool &, const int);

void getUserSearchBookByAuthor(string &);

void displaySearchBookByAuthor(Book[], const int, string &, int &);

int searchBookByAuthorResult(int, bool &, int &, bool &);

int searchBookByAuthor(Book[], bool &, const int);

void searchBookByCategoryHeader();

int searchBookByCategoryResult1(int, int &, bool &, bool &, string &, bool &);

void displaySearchBookByCategory(int &, int &, string &, const int, Book[]);

int searchBookByCategoryResult2(int, int &, bool &, bool &);

int searchBookByCategory(Book[], bool &, const int);

void getUsersearchBookByPublisher(string &);

void displaySearchBookByPublisher(Book[], const int, string &, int &);

int searchBookByPublisherResult(int, bool &, int &, bool &);

int searchBookByPublisher(Book[], bool &, const int);

void searchBookByPriceHeader();

void getUserSearchBookByPrice(string &);

void displayLowerThanSearchPrice(Book[], int &, float &, const int);

void displayHigherThanSearchPrice(Book[], int &, float &, const int);

int searchBookByPriceResult1(int &, int &, bool &, bool &);

int searchBookByPriceResult2(int &, bool &, bool &, int &);

int searchBookByPriceResult3(int &, bool &, bool &, int &);

int searchBookByPrice(Book[], bool &, const int);

void searchBookByRatingHeader();

void getUserSearchBookByRating(string &);

void displayHigherThanSearchRating(Book[], int &, float &, const int);

void displayLowerThanSearchRating(Book[], int &, float &, const int);

int searchBookByRatingResult1(int &, int &, bool &, bool &);

int searchBookByRatingResult2(int &, bool &, bool &, int &);

int searchBookByRatingResult3(int &, bool &, bool &, int &);

int searchBookByRating(Book[], bool &, const int);

void storePurchase(bool &, bool &, bool &);

int update_BookRating(Book[], const int, int);

int write_Order_File(Cart[], const int, string, int &, Order[]);

string checkStoreName(int);

void displayPurchaseMenu(string);

int purchaseBooksActionResult(int &, int &, bool &);

void get_BookID_Quantity(string &, string &);

void display_Purchase_InputError();

void add_NewQuantity_to_ExistingItem(string, Cart[], const int &, int, bool &, Book[], int);

void add_NewQuantity_to_NewItem(bool &, Cart[], const int &, string, string, Book[], int);

void display_SuccessAddCart(string, Book[], float, float, int);

void display_isBookIdExist_Option();

int display_isBookIdExist_Result(int, int &, bool &, bool &, bool &);

void display_CartList(const int &, Cart[], float &, float &, float &, float &);

void clear_CartList(Cart[], const int &);

void display_ClearCart_Message();

void display_CartList_Option();

int display_CartList_Result(int, bool &, int &, bool &, bool &, bool &);

void display_isBookIdExistFalse_Option();

int display_isBookIdExistFalse_Result(int, bool &, int &, bool &, bool &);

void display_PaymentMenu();

void get_PaymentInfo(string &, string &, string &, string &);

void display_PaymentDone_Message();

int receive_Payment(int &, const int &, Cart[], int &, Order[], bool &, string, int &, bool &, bool &, bool &, bool &, const int, string);

int purchaseBooksAction(Book[], const int, const int, Cart[], bool &, string, Order[], int &, int);

void giftOption();

void searchGiftBooks(string &);

void displayGiftBook(Book[], const int, string &, int &);

void storeGiftFile(Book[], int, string, string);

int giftingResult(int, bool &, int &, bool &, Book[], int, string, string);

int giftBookByISBN(Book[], bool &, const int, string);

void checkGiftStatus(bool &, bool &, bool &);

void getGiftData(Gift[], const int);

void displayGiftBook(Gift[], const int, string);

int giftResult(int, int &, bool &, int, int);

void makePaymentGift(int &, int &);

void giftHeader();

int giftFinalDisplay(Gift[], const int, string);

int bookStoreMenuResult(int &, int &, bool &);

void bookStoreMenuHeader(string);

int bookStoreMenu(int, bool &);

int storeSelectionMenuResult(int &, int &, bool &);

void storeSelectionMenuHeader();

int storeSelectionMenu();

int oneStopFeatureMenuResult(int &, int &, bool &);

void oneStopFeatureMenuHeader();

int oneStopFeatureMenu();

int additionalFeatureResult(int &, int &, bool &);

void displayAdditionalFeature();

int additionalFeature();

int homeMenuResult(int &, int &, bool &);

void homeMenuHeader();

int homeMenu();

void MulstoreSelectionMenuHeader();

void searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

int MulstoreSelectionMenu();

int bookmulStoreMenuResult(int &, int &, bool &);

void searchForMulAllbookHeader();

int searchForMulAllbook();

void searchForMulTitleHeader(vector<Book> &, string);

int searchForMulTitle(bool &, const int);

void getUsersearchForMulTitle(string &);

void getMulBookData(Book[], const int);

void displaysearchForMulTitle(const int, string, int &);

int searchForMulAuthor(bool &, const int);

void getUsersearchForMulAuthor(string &);

void displaysearchForMulAuthor(const int, string, int &);

void searchAndBookListByAuthorHeader();

int searchForMulCategory(bool &, const int);

int searchForMulCategoryResult1(int, int &, bool &, bool &, string &, bool &);

int searchForMulCategoryResult2(int, int &, bool &, bool &);

void displaysearchForMulCategory(int &, const int, string &, int &);

int searchForMulPublisher(bool &, const int);

void getUsersearchForMulPublisher(string &);

void displaysearchForMulPublisher(const int, string, int &);

int searchForMulPrice(bool &, const int);

void getUsersearchForMulPrice(string &);

void displayHigherThanSearchMulPrice(const int, float &, int &);

void displayLowerThanSearchMulPrice(const int, float &, int &);

int searchForMulRating(bool &, const int);

void displayHigherThanSearchMulRating(const int, float &, int &);

void displayLowerThanSearchMulRating(const int, float &, int &);

void MulsuggestbookMenuHeader();

int suggestBookResult(int &, int &, bool &);

void getsuggestbookdata(string &, int &);

int diplaysuggestbook();

int getMulsuggestBookData(Book[], const int);

void displaysuggestALLBOOK(const int);

void suggestbookOption();

int sugbookResult(int, int &, bool &);

int bookmulsuggestResult(int &, int &, bool &);

void Mulsuggestbookhistorymenu();

int main()
{
    // variable share for all features
    const int MAXORDER = 30;
    const int MAXMEMBER = 30;
    const int MAXBOOK = 30;
    const int MAXCART = 1;

    bool backHomePage = false, loginSuccess = false;
    bool purchaseBooks = false;
    bool payingFine = false;
    string loginUserName = "";
    Cart cart[MAXCART];
    Member members[MAXMEMBER];
    Order orders[MAXORDER];
    int numberOfMembers = 0;
    int numberOfOrders = 0;
    int numofISBN = 0;
    cart[0].totalPrice = 0.0;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Hello, there! Welcome to ABC ONE STOP BOOK STORE! \nWe are happy to see you. Feel free to use our services!" << endl;

    do
    {
        int homeMenuChoice = 0;
        backHomePage = false;

        // Check whether login into account
        if (loginSuccess == true)
        {
            getOrderData(orders, numberOfOrders);

            // Display accountHome menu
            homeMenuChoice = accountHomeMenu(loginUserName);
        }
        else
        {
            // Display home menu
            homeMenuChoice = homeMenu();
        }

        /*
         homeMenuChoice 1 == display registerOrLogin menu
         homeMenuChoice 2 == display one stop feature menu
         homeMenuChoice 3 == display account status
         homeMenuChoice 4 == logout account
         */
        if (homeMenuChoice == 1)
        {
            bool backRegisterOrLoginMenu;
            do
            {
                backRegisterOrLoginMenu = false;

                getAccountData(members, numberOfMembers);

                // Display registerOrLogin menu
                int registerOrLoginMenuChoice = registerOrLoginMenu();
                backHomePage = isBackPreviousPage(registerOrLoginMenuChoice);

                /*
                 registerOrLoginMenuChoice 1 == register account
                 registerOrLoginMenuChoice 2 == login account
                 */
                if (registerOrLoginMenuChoice == 1)
                {
                    // Display register menu
                    int registerMenuChoice = registerMenu(members, numberOfMembers, loginSuccess, loginUserName, MAXMEMBER);

                    backRegisterOrLoginMenu = isBackPreviousPage(registerMenuChoice);
                    backHomePage = isBackHomePage(registerMenuChoice);
                }
                else if (registerOrLoginMenuChoice == 2)
                {
                    // Display login menu
                    int loginMenuChoice = loginMenu(members, loginSuccess, loginUserName, MAXMEMBER);
                    backRegisterOrLoginMenu = isBackPreviousPage(loginMenuChoice);
                    backHomePage = isBackHomePage(loginMenuChoice);
                }
            } while (backRegisterOrLoginMenu == true);
        }
        else if (homeMenuChoice == 2)
        {

            bool backOneStopFeatureMenu = false, borrowBooks = false;

            do
            {
                backOneStopFeatureMenu = false;

                // Display oneStopFeatureMenu menu
                int featureChoice = oneStopFeatureMenu();
                backHomePage = isBackPreviousPage(featureChoice);

                if (featureChoice == 1)
                {
                    // individual store feature

                    bool backStoreSelectionMenu;

                    do
                    {
                        backStoreSelectionMenu = false;

                        // Display storeSelection menu
                        int storesChoice = storeSelectionMenu();
                        backOneStopFeatureMenu = isBackPreviousPage(storesChoice);
                        backHomePage = isBackHomePage(storesChoice);

                        /*
                        storesChoice 1 == bookstoreA
                        storesChoice 2 == bookstoreB
                        storesChoice 3 == bookstoreC
                        */
                        if (storesChoice == 1 || storesChoice == 2 || storesChoice == 3)
                        {
                            bool backBookStoreMenu;

                            do
                            {

                                backBookStoreMenu = false;

                                Book books[MAXBOOK];

                                getBookData(storesChoice, books, MAXBOOK);

                                // Display bookStore menu
                                int storeChoice = bookStoreMenu(storesChoice, loginSuccess);
                                backStoreSelectionMenu = isBackPreviousPage(storeChoice);
                                backHomePage = isBackHomePage(storeChoice);

                                /*
                                storeChoice 1 == display all book
                                storeChoice 2 == search book by title
                                storeChoice 3 == search book by author
                                storeChoice 4 == search book by category
                                storeChoice 5 == search book by pulisher
                                storeChoice 6 == search for books by price
                                storeChoice 7 == search for books by rating
                                storeChoice 8 == purchase book
                                storeChoice 9 == give book rating
                                */
                                if (storeChoice == 1)
                                {
                                    // Display all book
                                    int displayAllBookChoice = displayAllBook(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(displayAllBookChoice);
                                    backHomePage = isBackHomePage(displayAllBookChoice);
                                    purchaseBooks = isPurchaseBooks(displayAllBookChoice);
                                }
                                else if (storeChoice == 2)
                                {
                                    // Search book by title
                                    int searchBookTitleChoice = searchBookByTitle(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(searchBookTitleChoice);
                                    backHomePage = isBackHomePage(searchBookTitleChoice);
                                    purchaseBooks = isPurchaseBooks(searchBookTitleChoice);
                                }
                                else if (storeChoice == 3)
                                {
                                    // Search book by author
                                    int searchBookAuthorChoice = searchBookByAuthor(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(searchBookAuthorChoice);
                                    backHomePage = isBackHomePage(searchBookAuthorChoice);
                                    purchaseBooks = isPurchaseBooks(searchBookAuthorChoice);
                                }
                                else if (storeChoice == 4)
                                {
                                    // Search book by category
                                    int searchBookCategoryChoice = searchBookByCategory(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(searchBookCategoryChoice);
                                    backHomePage = isBackHomePage(searchBookCategoryChoice);
                                    purchaseBooks = isPurchaseBooks(searchBookCategoryChoice);
                                }
                                else if (storeChoice == 5)
                                {
                                    // Search book by pulisher
                                    int searchBookPublisherChoice = searchBookByPublisher(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(searchBookPublisherChoice);
                                    backHomePage = isBackHomePage(searchBookPublisherChoice);
                                    purchaseBooks = isPurchaseBooks(searchBookPublisherChoice);
                                }
                                else if (storeChoice == 6)
                                {
                                    // Search for books by price
                                    int searchBookPriceChoice = searchBookByPrice(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(searchBookPriceChoice);
                                    backHomePage = isBackHomePage(searchBookPriceChoice);
                                    purchaseBooks = isPurchaseBooks(searchBookPriceChoice);
                                }
                                else if (storeChoice == 7)
                                {
                                    // Search for books by rating

                                    int searchBookRatingChoice = searchBookByRating(books, loginSuccess, MAXBOOK);
                                    backBookStoreMenu = isBackPreviousPage(searchBookRatingChoice);
                                    backHomePage = isBackHomePage(searchBookRatingChoice);
                                    purchaseBooks = isPurchaseBooks(searchBookRatingChoice);
                                }
                                else if (storeChoice == 8)
                                {
                                    // Purchase book
                                    storePurchase(loginSuccess, purchaseBooks, backHomePage);
                                }
                                else if (storeChoice == 9)
                                {
                                    // give book rating

                                    int updateBookRatingChoice = update_BookRating(books, MAXBOOK, storesChoice);
                                    backHomePage = isBackHomePage(updateBookRatingChoice);
                                    backBookStoreMenu = isBackPreviousPage(updateBookRatingChoice);
                                }

                                if (purchaseBooks == true)
                                {
                                    // purchase book action
                                    int purchaseBooksActionChoice = purchaseBooksAction(books, MAXBOOK, MAXCART, cart, purchaseBooks, loginUserName, orders, numberOfOrders, storesChoice);
                                    backBookStoreMenu = isBackPreviousPage(purchaseBooksActionChoice);
                                    backHomePage = isBackHomePage(purchaseBooksActionChoice);
                                }
                            } while (backBookStoreMenu == true);
                        }
                    } while (backStoreSelectionMenu == true);
                }
                else if (featureChoice == 2)
                {
                    // multiple store feature
                    bool backMulstoreSelectionMenu;

                    do
                    {
                        backMulstoreSelectionMenu = false;

                        // display MulstoreSelectionMenu
                        int storesChoice = MulstoreSelectionMenu();
                        backOneStopFeatureMenu = isBackPreviousPage(storesChoice);
                        backHomePage = isBackHomePage(storesChoice);
                        bool backMulBookStoreMenu;

                        do
                        {
                            backMulBookStoreMenu = false;
                            if (storesChoice == 1)
                            {
                                // Search mulbookstore title
                                int searchBookTitleChoice = searchForMulTitle(loginSuccess, MAXBOOK);
                                backMulstoreSelectionMenu = isBackPreviousPage(searchBookTitleChoice);
                                backHomePage = isBackHomePage(searchBookTitleChoice);
                            }
                            else if (storesChoice == 2)
                            {
                                // Search mulbookstore author
                                int searchBookAuthorChoice = searchForMulAuthor(loginSuccess, MAXBOOK);
                                backMulstoreSelectionMenu = isBackPreviousPage(searchBookAuthorChoice);
                                backHomePage = isBackHomePage(searchBookAuthorChoice);
                            }
                            else if (storesChoice == 3)
                            {
                                // search mulbookstore category
                                int searchBookCategoryChoice = searchForMulCategory(loginSuccess, MAXBOOK);
                                backMulstoreSelectionMenu = isBackPreviousPage(searchBookCategoryChoice);
                                backHomePage = isBackHomePage(searchBookCategoryChoice);
                            }
                            else if (storesChoice == 4)
                            {
                                // search mulbookstore publisher
                                int searchBookPublisherChoice = searchForMulPublisher(loginSuccess, MAXBOOK);
                                backMulstoreSelectionMenu = isBackPreviousPage(searchBookPublisherChoice);
                                backHomePage = isBackHomePage(searchBookPublisherChoice);
                            }
                            else if (storesChoice == 5)
                            {
                                // search mulbookstore price
                                int searchBookPriceChoice = searchForMulPrice(loginSuccess, MAXBOOK);
                                backMulstoreSelectionMenu = isBackPreviousPage(searchBookPriceChoice);
                                backHomePage = isBackHomePage(searchBookPriceChoice);
                            }
                            else if (storesChoice == 6)
                            {
                                // search mulbookstore rating
                                int searchBookRatingChoice = searchForMulRating(loginSuccess, MAXBOOK);
                                backMulstoreSelectionMenu = isBackPreviousPage(searchBookRatingChoice);
                                backHomePage = isBackHomePage(searchBookRatingChoice);
                            }
                            else if (storesChoice == 7)
                            {
                                // suggest book function
                                int suggestbookchoice = diplaysuggestbook();
                                backMulstoreSelectionMenu = isBackPreviousPage(suggestbookchoice);
                                backHomePage = isBackHomePage(suggestbookchoice);
                            }
                        } while (backMulBookStoreMenu == true);

                    } while (backMulstoreSelectionMenu == true);
                }
                else if (featureChoice == 3)
                {
                    bool backAddtionalFeature;
                    do
                    {
                        // additional feature menu
                        int additionalChoice = additionalFeature();
                        backOneStopFeatureMenu = isBackPreviousPage(additionalChoice);
                        backHomePage = isBackHomePage(additionalChoice);

                        if (backOneStopFeatureMenu)
                        {
                            break;
                        }
                        else if (backHomePage)
                        {
                            additionalChoice = 72;
                            break;
                        }

                        if (additionalChoice == 1)
                        {
                            if (!loginSuccess)
                            {
                                cout << "Please login first!" << endl;
                                backHomePage = true;
                                break;
                            }

                            // check if the user is not a member will loop back to home menu.
                            checkGiftStatus(loginSuccess, payingFine, backHomePage);

                            bool backStoreSelectionMenu;
                            do
                            {
                                backStoreSelectionMenu = false;

                                // display store selection menu
                                int storesChoice = storeSelectionMenu();
                                backAddtionalFeature = isBackPreviousPage(storesChoice);
                                backHomePage = isBackHomePage(storesChoice);

                                if (backHomePage)
                                {
                                    storesChoice = 72;
                                    break;
                                }

                                else if (backAddtionalFeature)
                                {
                                    break;
                                }

                                // Choose whether bookstore A B or C
                                if (storesChoice == 1 || storesChoice == 2 || storesChoice == 3)
                                {
                                    const int MAXBOOK = 100;
                                    Book books[MAXBOOK];
                                    do
                                    {
                                        // read the book information from bookstores file
                                        getBookData(storesChoice, books, MAXBOOK);

                                        int giftingChoice = giftBookByISBN(books, loginSuccess, MAXBOOK, loginUserName);
                                        backAddtionalFeature = isBackPreviousPage(giftingChoice);
                                        backHomePage = isBackHomePage(giftingChoice);
                                        borrowBooks = isBorrowBooks(giftingChoice);

                                        if (backHomePage)
                                        {
                                            giftingChoice = 72;
                                            break;
                                        }
                                        else if (giftingChoice == 66)
                                        {
                                            break;
                                        }

                                    } while (backStoreSelectionMenu == true);
                                }

                            } while (backAddtionalFeature == true && backStoreSelectionMenu == false);
                        }

                        else if (additionalChoice == 2)
                        {
                            // loop back to home menu if is not a member
                            if (!loginSuccess)
                            {
                                cout << "Please login first!" << endl;
                                backHomePage = true;
                                break;
                            }

                            checkGiftStatus(loginSuccess, payingFine, backHomePage);
                            const int MAXFINE = 100;
                            Gift gifts[MAXFINE];
                            getGiftData(gifts, MAXFINE);

                            do
                            {
                                int giftChoice = giftFinalDisplay(gifts, MAXFINE, loginUserName);
                                backAddtionalFeature = isBackPreviousPage(giftChoice);
                                backHomePage = isBackHomePage(giftChoice);

                                if (giftChoice == 66)
                                {
                                    break;
                                }

                            } while (backAddtionalFeature == true);
                        }

                    } while (backAddtionalFeature == true);
                }
            } while (backOneStopFeatureMenu == true);
        }
        else if (homeMenuChoice == 3)
        {
            // Display account status
            checkAccountStatus(loginUserName, backHomePage, members, numberOfMembers, MAXMEMBER, orders, MAXORDER);
        }
        else if (homeMenuChoice == 4)
        {
            // Logout account
            logoutAccount(loginSuccess, backHomePage, cart, MAXCART, loginUserName, purchaseBooks);
        }

    } while (backHomePage == true);

    return 0;
}

int getUserChoices()
{
    string yourChoice = "";
    int numYourChoice = 0;

    getline(cin, yourChoice);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // check if string have more characters
    if (!yourChoice[1])
    {
        char firstChar = yourChoice[0];

        // return ascii decimal value of the char
        int numYourChoice = toupper(firstChar);

        // ascii decimal value of the input
        // 0 == 48
        // 1 == 49
        // 2 == 50
        // 3 == 51
        // 4 == 52
        // 5 == 53
        // 6 == 54
        // 7 == 55
        // 8 == 56
        // 9 == 57
        // H (Home) == 72
        // B (Back) == 66
        // A (Add to cart) == 65
        // C (Clear cart) == 67
        // V (View cart) == 86
        // P (Purchase) == 80
        // R (Retry) == 82
        // X (Exit) == 88

        return numYourChoice;
    }
    else
    {
        //  if false then return irrelevant numYourChoice to menu
        numYourChoice = 999;

        return numYourChoice;
    }

    return 0;
}

bool isBackHomePage(int number)
{
    if (number == 72)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isBackPreviousPage(int number)
{
    if (number == 66)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isPurchaseBooks(int number)
{
    if (number == 80)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool isBorrowBooks(int number)
{
    if (number == 89)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void getAccountData(Member members[], int &numberOfMembers)
{
    ifstream membership;
    membership.open("Membership.csv");
    ifstream coutline;
    coutline.open("Membership.csv");
    string firstRow;

    numberOfMembers = 0;

    // count number of members in membership.csv
    if (coutline)
    {
        while (getline(coutline, firstRow))
        {
            ++numberOfMembers;
        }
        --numberOfMembers;
        coutline.close();
    }
    else
    {
        cout << "Count line don't exist!!!\n";
    }

    // store members info into members array
    if (membership)
    {

        getline(membership, firstRow);

        for (int i = 0; i < numberOfMembers; i++)
        {
            getline(membership, members[i].username, ',');
            getline(membership, members[i].password);
        }

        membership.close();
    }
    else
    {
        cout << "Cannot get value in Membership.csv sheet!!!";
    }
}

void getOrderData(Order orders[], int &numberOfOrders)
{
    ifstream ordersFile;
    ordersFile.open("Orders.csv");
    ifstream coutline;
    coutline.open("Orders.csv");
    string firstRow;

    numberOfOrders = 0;

    // count number of orders in orders.csv
    if (coutline)
    {
        while (getline(coutline, firstRow))
        {
            ++numberOfOrders;
        }
        --numberOfOrders;

        coutline.close();
    }
    else
    {
        cout << "Count line don't exist!!!\n";
    }

    // store orders value into orders array
    if (ordersFile)
    {

        getline(ordersFile, firstRow);

        for (int i = 0; i < numberOfOrders; i++)
        {
            orders[i].bookId.clear();
            orders[i].bookTitle.clear();
            orders[i].quantity.clear();

            getline(ordersFile, orders[i].username, ',');
            getline(ordersFile, orders[i].orderStatus, ',');

            string individualBookId;
            string bookId;
            getline(ordersFile, bookId, ',');

            stringstream ss(bookId);

            while (getline(ss, individualBookId, ';'))
            {
                orders[i].bookId.push_back(individualBookId);
            }

            ss.clear();

            string individualBookTitle;
            string bookTitle;
            getline(ordersFile, bookTitle, ',');

            stringstream st(bookTitle);

            while (getline(st, individualBookTitle, ';'))
            {
                orders[i].bookTitle.push_back(individualBookTitle);
            }

            st.clear();

            string individualQuantity;
            string quantity;
            getline(ordersFile, quantity);

            stringstream sq(quantity);

            while (getline(sq, individualQuantity, ';'))
            {
                orders[i].quantity.push_back(individualQuantity);
            }

            sq.clear();
        }

        ordersFile.close();
    }
    else
    {
        cout << "Cannot get value in Orders.csv sheet!!!";
    }
}

bool logoutAccount(bool &loginSuccess, bool &backHomePage, Cart cart[], const int &MAXCART, string &loginUserName, bool &purchaseBooks)
{
    loginSuccess = false;
    purchaseBooks = false;
    backHomePage = true;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Your account is sucessfully logout..." << endl;
    cout << "-----------------------------------------" << endl;

    // clear cart array values
    cart[MAXCART - 1].bookId.clear();
    cart[MAXCART - 1].bookTitle.clear();
    cart[MAXCART - 1].quantity.clear();
    cart[MAXCART - 1].totalPrice = 0;

    loginUserName = "";

    return 0;
}

void displayAccountStatus(string &loginUserName, Member members[], const int MAXMEMBER, Order orders[], const int MAXORDER)
{
    for (int i = 0; i < MAXMEMBER; i++)
    {
        if (loginUserName == members[i].username)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "========================================" << endl;
            cout << "         CURRENT ACCOUNT STATUS         " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "Account name: " << members[i].username << endl;

            int count = 1;

            for (int j = 0; j < MAXORDER; j++)
            {
                if (loginUserName == orders[j].username)
                {
                    cout << endl;
                    cout << "************************************" << endl;
                    cout << "Order number: " << count << endl;
                    cout << "Order status: " << orders[j].orderStatus << endl;

                    int bookIdSize = orders[j].bookId.size();

                    for (int k = 0; k < bookIdSize; k++)
                    {
                        cout << "-----------------" << endl;
                        cout << "Book ISBN: " << orders[j].bookId[k] << endl;
                        cout << "Book Title: " << orders[j].bookTitle[k] << endl;
                        cout << "Quantity: " << orders[j].quantity[k] << endl;
                    }
                    cout << "-----------------" << endl;
                    cout << "************************************" << endl;
                    cout << endl;

                    ++count;
                }
            }

            break;
        }
    }
}

void checkAccountStatusOption()
{
    cout << "---------------------------------------" << endl;
    cout << "Enter [B] to previous page" << endl;
    cout << "Enter [X] to exit program" << endl;
    cout << "=======================================" << endl;
    cout << "Please enter your option: ";
}

int checkAccountStatusResult(bool &backHomePage, int userChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 66:
        backHomePage = true;
        break;
    case 88:
        cout << "Your exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

int checkAccountStatus(string &loginUserName, bool &backHomePage, Member members[], int &numberOfMembers, const int MAXMEMBER, Order orders[], const int MAXORDER)
{
    bool inputError = false;
    int checkAccountStatusChoice = 0;

    getAccountData(members, numberOfMembers);

    displayAccountStatus(loginUserName, members, MAXMEMBER, orders, MAXORDER);

    do
    {
        inputError = false;
        checkAccountStatusChoice = 0;

        checkAccountStatusOption();

        int userChoice = getUserChoices();

        checkAccountStatusResult(backHomePage, userChoice, inputError);
    } while (inputError == true);

    return 0;
}

void accountHomeMenuHeader(string loginUserName)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================================" << endl;
    cout << "                        WELCOME TO                      " << endl;
    cout << "                 ABC ONE STOP BOOK STORE                " << endl;
    cout << "========================================================" << endl;
    cout << endl;
    cout << "Hi "
         << loginUserName << ", please select options below to proceed: " << endl;
    cout << endl;
    cout << "1. Continue to next step" << endl;
    cout << "2. Order Status" << endl;
    cout << "3. Logout your account" << endl;
    cout << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Enter [1-3] to next page" << endl;
    cout << "Enter [X] to exit program" << endl;
    cout << "========================================================" << endl;
    cout << "Please enter your option: ";
}

int accountHomeMenuResult(int userChoice, int &homeMenuChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        homeMenuChoice = 2;
        return homeMenuChoice;
        break;
    case 50:
        homeMenuChoice = 3;
        return homeMenuChoice;
        break;
    case 51:
        homeMenuChoice = 4;
        return homeMenuChoice;
        break;
    case 88:
        cout << "Your exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

int accountHomeMenu(string loginUserName)
{
    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int homeMenuChoice = 0;

        accountHomeMenuHeader(loginUserName);

        int userChoice = getUserChoices();

        result = accountHomeMenuResult(userChoice, homeMenuChoice, inputError);

    } while (inputError == true);

    return result;
}

void displayLoginMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "=====================================================" << endl;
    cout << "                      LOGIN MENU                     " << endl;
    cout << "=====================================================" << endl;
    cout << endl;
    cout << endl;
}

void getLoginData(string &userUsername, string &userPassword)
{
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Only accept digits & alphabets (case sensitive) as input" << endl;
    cout << "2. Username and Password must have atleast 5 \n   characters (digits &/or alphabets)" << endl;
    cout << "3. Not accept whitespace character as input" << endl;
    cout << "4. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter your information " << endl;
    cout << "Username: ";
    getline(cin, userUsername);
    cout << "Password: ";
    getline(cin, userPassword);
}

int checkLoginAccount(string &loginUserName, string &userUsername, string &userPassword, bool &inputError, bool &loginSuccess, Member members[], const int MAXMEMBER)
{
    for (int i = 0; i < MAXMEMBER; i++)
    {

        if (userUsername == members[i].username && userPassword == members[i].password && !(userUsername.empty()))
        {
            inputError = false;
            loginSuccess = true;
            int backHomePage = 72;
            loginUserName = userUsername;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------" << endl;
            cout << "Login sucessfully!" << endl;
            cout << "-----------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage now..." << endl;

            return backHomePage;
        }
        else
        {
            inputError = true;
        }
    }

    return 0;
}

void loginMenuOption()
{
    cout << endl;

    cout << "---------------------------------------" << endl;
    cout << "Enter [R] to try again" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=======================================" << endl;
    cout << "Please enter your option: ";
}

int loginMenuResult(int userChoice, int &loginMenuChoice, bool &inputError, bool &userLoginOptionError)
{
    switch (userChoice)
    {
    case 66:
        loginMenuChoice = 66;
        return loginMenuChoice;
        break;
    case 72:
        loginMenuChoice = 72;
        return loginMenuChoice;
        break;
    case 82:
        inputError = true;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        userLoginOptionError = true;
        break;
    }

    return 0;
}

int loginMenu(Member members[], bool &loginSuccess, string &loginUserName, const int MAXMEMBER)
{
    bool inputError = false;
    int loginMenuChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        string userUsername = "", userPassword = "";

        displayLoginMenuHeader();

        getLoginData(userUsername, userPassword);

        if (userUsername == "-999" || userPassword == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        result = checkLoginAccount(loginUserName, userUsername, userPassword, inputError, loginSuccess, members, MAXMEMBER);

        if (inputError == true)
        {

            bool userLoginOptionError = false;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Account input error. Please try again..." << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;

            do
            {
                userLoginOptionError = false;
                inputError = false;

                loginMenuOption();

                int userChoice = getUserChoices();

                result = loginMenuResult(userChoice, loginMenuChoice, inputError, userLoginOptionError);

            } while (userLoginOptionError == true);
        }
    } while (inputError == true);

    return result;
}

void displayRegistrationMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "=====================================================" << endl;
    cout << "                  REGISTRATION MENU                  " << endl;
    cout << "=====================================================" << endl;
    cout << endl;
    cout << endl;
}

void getRegistrationData(string &userUsername, string &userPassword)
{
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Only accept digits & alphabets (case sensitive) as input" << endl;
    cout << "2. Username and Password must have atleast 5 \n   characters (digits &/or alphabets)" << endl;
    cout << "3. Not accept whitespace character as input" << endl;
    cout << "4. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter following registration information: " << endl;
    cout << "Username: ";
    getline(cin, userUsername);
    cout << "Password: ";
    getline(cin, userPassword);
}

int checkRegisterAccount(string &userUsername, const int MAXMEMBER, Member members[], bool &isAccountExist)
{
    for (int i = 0; i < MAXMEMBER; i++)
    {
        if (members[i].username == userUsername)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Similar account exist!" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;

            isAccountExist = true;
            break;
        }
    }

    return 0;
}

void registerMenuOption()
{
    cout << "---------------------------------------" << endl;
    cout << "Enter [R] to try again" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=======================================" << endl;
    cout << "Please enter your option: ";
}

int registerMenuResult1(int userChoice, int &registerMenuChoice, bool &isAccountExist, bool &userRegisterOptionError)
{
    switch (userChoice)
    {
    case 66:
        registerMenuChoice = 66;
        return registerMenuChoice;
        break;
    case 72:
        registerMenuChoice = 72;
        return registerMenuChoice;
        break;
    case 82:
        isAccountExist = true;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        userRegisterOptionError = true;
        break;
    }

    return 0;
}

int registerMenuResult2(int userChoice, int &registerMenuChoice, bool &isAccountExist, bool &userRegisterOptionError)
{
    switch (userChoice)
    {
    case 66:
        registerMenuChoice = 66;
        return registerMenuChoice;
        break;
    case 72:
        registerMenuChoice = 72;
        return registerMenuChoice;
        break;
    case 82:
        isAccountExist = true;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        userRegisterOptionError = true;
        break;
    }

    return 0;
}

int registerMember(Member members[], int &numberOfMembers, string &userUsername, string &userPassword, string &loginUserName, bool &loginSuccess)
{
    // create temporary file and store all members info inside. Remove old file. Then rename temporary file to Membership.csv
    fstream temporaryMembership("temporaryMembership.csv", ios::out);

    if (temporaryMembership)
    {
        temporaryMembership << "Username, Password\n";

        for (int i = 0; i < numberOfMembers; i++)
        {

            temporaryMembership << members[i].username << "," << members[i].password << "\n";
        }

        temporaryMembership << userUsername << "," << userPassword << "\n";

        temporaryMembership.close();

        char existingFileName[] = "Membership.csv";
        int status = remove(existingFileName);
        if (status != 0)
            cout << "File Deleted Error Occurred!\n";

        char oldname[] = "temporaryMembership.csv";
        char newname[] = "Membership.csv";

        if (rename(oldname, newname) != 0)
            perror("Error renaming file");

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "------------------------------------" << endl;
        cout << "You registered sucessfully!" << endl;
        cout << "------------------------------------" << endl;

        loginUserName = userUsername;
        loginSuccess = true;
        int backHomePage = 72;

        ++numberOfMembers;

        return backHomePage;
    }

    return 0;
}

int registerMenu(Member members[], int &numberOfMembers, bool &loginSuccess, string &loginUserName, const int MAXMEMBER)
{
    bool isAccountExist = false;
    int registerMenuChoice = 0;
    int result = 0;

    do
    {
        isAccountExist = false;
        string userUsername = "", userPassword = "";

        displayRegistrationMenuHeader();

        getRegistrationData(userUsername, userPassword);

        if (userUsername == "-999" || userPassword == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        const string specialChars = "\t~`!@# $%^&*()_+-^=|\\}]{['\":;/?><.], ";

        // check if user input is invalid
        if (userPassword.length() >= 5 && userUsername.length() >= 5 && !(userUsername.empty()) && userUsername.find_first_of(specialChars) == string::npos && userPassword.find_first_of(specialChars) == string::npos)
        {

            checkRegisterAccount(userUsername, MAXMEMBER, members, isAccountExist);

            if (isAccountExist == true)
            {
                isAccountExist = false;

                bool userRegisterOptionError;

                do
                {
                    userRegisterOptionError = false;

                    registerMenuOption();

                    int userChoice = getUserChoices();

                    result = registerMenuResult1(userChoice, registerMenuChoice, isAccountExist, userRegisterOptionError);

                } while (userRegisterOptionError == true);
            }
            else if (isAccountExist == false)
            {
                // if number of members exceed 30, system will exit
                if (numberOfMembers + 1 > 30)
                {
                    cout << "You have exceed system capacity! Exiting the program now..." << endl;
                    exit(1);
                }

                // write new member into csv file
                result = registerMember(members, numberOfMembers, userUsername, userPassword, loginUserName, loginSuccess);
            }
        }
        else
        {

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;

            bool userRegisterOptionError;

            do
            {
                userRegisterOptionError = false;

                registerMenuOption();

                int userChoice = getUserChoices();

                result = registerMenuResult2(userChoice, registerMenuChoice, isAccountExist, userRegisterOptionError);

            } while (userRegisterOptionError == true);
        }

    } while (isAccountExist == true);

    return result;
}

void registerOrLoginMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "          REGISTRATION & LOGIN          " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select options below to proceed: " << endl;
    cout << endl;
    cout << "1. Register account" << endl;
    cout << "2. Login account" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-2] to next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [X] to exit program" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your option: ";
}

int registerOrLoginMenuResult(int userChoice, int &registerOrLoginMenuChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        registerOrLoginMenuChoice = 1;
        return registerOrLoginMenuChoice;
        break;
    case 50:
        registerOrLoginMenuChoice = 2;
        return registerOrLoginMenuChoice;
        break;
    case 66:
        registerOrLoginMenuChoice = 66;
        return registerOrLoginMenuChoice;
        break;
    case 88:
        cout << "Your exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

int registerOrLoginMenu()
{
    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int registerOrLoginMenuChoice = 0;

        registerOrLoginMenuHeader();

        int userChoice = getUserChoices();

        result = registerOrLoginMenuResult(userChoice, registerOrLoginMenuChoice, inputError);

    } while (inputError == true);

    return result;
}

void getBookData(int storesChoice, Book books[], const int MAXBOOK)
{
    // check user's storeChoice then assign storeFile accordingly
    string storeFile;

    if (storesChoice == 1)
    {
        storeFile = "BookstoreA.csv";
    }
    else if (storesChoice == 2)
    {
        storeFile = "BookstoreB.csv";
    }
    else
    {
        storeFile = "BookstoreC.csv";
    }

    ifstream Bookstore;
    Bookstore.open(storeFile);
    string firstRow;

    if (Bookstore)
    {
        while (!(Bookstore.eof()))
        {
            getline(Bookstore, firstRow);

            // store book values in csv file into books array
            for (int i = 0; i < MAXBOOK; i++)
            {
                getline(Bookstore, books[i].bookId, ',');
                getline(Bookstore, books[i].bookTitle, ',');
                getline(Bookstore, books[i].bookAuthor, ',');
                getline(Bookstore, books[i].bookCategory, ',');
                getline(Bookstore, books[i].bookPublisher, ',');
                getline(Bookstore, books[i].bookEdition, ',');
                getline(Bookstore, books[i].bookPrice, ',');
                getline(Bookstore, books[i].bookRating, ',');
                getline(Bookstore, books[i].numPeopleRating);
            }
        }
    }
    else
    {
        cout << "Cannot get value in Bookstore sheet!!!";
    }

    Bookstore.close();
}

void searchAndBookListHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "We are start searching..." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "=========================================================" << endl;
    cout << "Here are all the books: " << endl;
    cout << "=========================================================" << endl;
    cout << endl;
}

void displayBooks(Book books[], const int MAXBOOK)
{

    for (int i = 0; i < MAXBOOK; i++)
    {
        float tempBookPrice = stof(books[i].bookPrice);
        float tempRating = stof(books[i].bookRating);
        float tempPeopleRated = stof(books[i].numPeopleRating);

        cout << endl;
        cout << "---------------------------------------" << endl;
        cout << "Book ISBN: " << books[i].bookId << endl;
        cout << "Book Title: " << books[i].bookTitle << endl;
        cout << "Author: " << books[i].bookAuthor << endl;
        cout << "Category: " << books[i].bookCategory << endl;
        cout << "Publisher: " << books[i].bookPublisher << endl;
        cout << "Edition: " << books[i].bookEdition << endl;
        cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
        cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
        cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
        cout << "---------------------------------------" << endl;
        cout << endl;
    }
}

void displayAllBookOption()
{
    cout << "---------------------------------------------------------" << endl;
    cout << "Reminder: Please record book ISBN to proceed purchase books" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Enter [P] to purchase books" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=========================================================" << endl;
    cout << "Please enter your option: ";
}

int displayAllBookResult(int userChoice, int &displayAllBookChoice, bool &inputError, bool &loginSuccess)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            displayAllBookChoice = 72;
            return displayAllBookChoice;
        }
        else
        {
            displayAllBookChoice = 80;
            return displayAllBookChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            displayAllBookChoice = 66;
            return displayAllBookChoice;
            break;
        case 72:
            displayAllBookChoice = 72;
            return displayAllBookChoice;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }
    return 0;
}

int displayAllBook(Book books[], bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int result = 0;

    int displayAllBookChoice = 0;

    searchAndBookListHeader();

    displayBooks(books, MAXBOOK);

    do
    {
        inputError = false;

        displayAllBookOption();

        int userChoice = getUserChoices();

        result = displayAllBookResult(userChoice, displayAllBookChoice, inputError, loginSuccess);

    } while (inputError == true);

    return result;
}

void getUserSearchBookByTitle(string &searchBookTitle)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Input is case insensitive" << endl;
    cout << "3. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter book title that you are looking for: " << endl;
    getline(cin, searchBookTitle);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void stringToUpperCase(string &searchString)
{
    // convert all characters in string to uppercase
    for (char &c : searchString)
    {
        c = toupper(c);
    }
}

void displaySearchBookByTitle(Book books[], const int MAXBOOK, string &searchBookTitle, int &numRelevantBooks)
{
    // check similar characters
    int string1Length = searchBookTitle.length();

    for (int j = 0; j < MAXBOOK; j++)
    {
        int string2Length = books[j].bookTitle.length();

        // Check if book title in books array has similar characters with user input
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books[j].bookTitle.substr(i, string1Length) == searchBookTitle)
            {
                float tempBookPrice = stof(books[j].bookPrice);
                float tempRating = stof(books[j].bookRating);
                float tempPeopleRated = stof(books[j].numPeopleRating);

                ++numRelevantBooks;

                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books[j].bookId << endl;
                cout << "Book Title: " << books[j].bookTitle << endl;
                cout << "Author: " << books[j].bookAuthor << endl;
                cout << "Category: " << books[j].bookCategory << endl;
                cout << "Publisher: " << books[j].bookPublisher << endl;
                cout << "Edition: " << books[j].bookEdition << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }

    cout << "Total " << numRelevantBooks << " relevant books found in our system" << endl;
    cout << endl;
}

void searchTitle_Author_Category_Publisher_Price_RatingOption()
{
    cout << "---------------------------------------------------------" << endl;
    cout << "Reminder: Please record book ISBN to proceed purchase books" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Enter [P] to purchase books" << endl;
    cout << "Enter [R] to try again" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=========================================================" << endl;
    cout << "Please enter your option: ";
}

int searchBookByTitleResult(int userChoice, bool &loginSuccess, int &searchBookTitleChoice, bool &inputError)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookTitleChoice = 72;
            return searchBookTitleChoice;
        }
        else
        {
            searchBookTitleChoice = 80;
            return searchBookTitleChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookTitleChoice = 66;
            return searchBookTitleChoice;
            break;
        case 72:
            searchBookTitleChoice = 72;
            return searchBookTitleChoice;
            break;
        case 82:
            searchBookTitleChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }

    return 0;
}

int searchBookByTitle(Book books[], bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int searchBookTitleChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookTitleChoice = 0;
        string searchBookTitle = "";

        getUserSearchBookByTitle(searchBookTitle);

        if (searchBookTitle == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        // check unwanted character
        if (!(searchBookTitle.empty()) && searchBookTitle[0] != '\t' && searchBookTitle[0] != ' ')
        {

            stringToUpperCase(searchBookTitle);

            searchAndBookListHeader();

            displaySearchBookByTitle(books, MAXBOOK, searchBookTitle, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption();

                int userChoice = getUserChoices();

                result = searchBookByTitleResult(userChoice, loginSuccess, searchBookTitleChoice, inputError);
            } while (inputError == true);
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || searchBookTitleChoice == 82);

    return result;
}

void getUserSearchBookByAuthor(string &searchBookAuthor)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Input is case insensitive" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter author that you are looking for: " << endl;
    getline(cin, searchBookAuthor);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displaySearchBookByAuthor(Book books[], const int MAXBOOK, string &searchBookAuthor, int &numRelevantBooks)
{
    // check similar characters
    int string1Length = searchBookAuthor.length();

    for (int j = 0; j < MAXBOOK; j++)
    {
        int string2Length = books[j].bookAuthor.length();

        // check if author in books array has similar characters with user input
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books[j].bookAuthor.substr(i, string1Length) == searchBookAuthor)
            {
                float tempBookPrice = stof(books[j].bookPrice);
                float tempRating = stof(books[j].bookRating);
                float tempPeopleRated = stof(books[j].numPeopleRating);

                ++numRelevantBooks;

                cout << endl;
                cout << "------------------------------" << endl;
                cout << "Book ISBN: " << books[j].bookId << endl;
                cout << "Book Title: " << books[j].bookTitle << endl;
                cout << "Author: " << books[j].bookAuthor << endl;
                cout << "Category: " << books[j].bookCategory << endl;
                cout << "Publisher: " << books[j].bookPublisher << endl;
                cout << "Edition: " << books[j].bookEdition << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }

    cout << "Total " << numRelevantBooks << " books from author that have \"" << searchBookAuthor << "\" in their name are found in our system" << endl;
    cout << endl;
}

int searchBookByAuthorResult(int userChoice, bool &loginSuccess, int &searchBookAuthorChoice, bool &inputError)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookAuthorChoice = 72;
            return searchBookAuthorChoice;
        }
        else
        {
            searchBookAuthorChoice = 80;
            return searchBookAuthorChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookAuthorChoice = 66;
            return searchBookAuthorChoice;
            break;
        case 72:
            searchBookAuthorChoice = 72;
            return searchBookAuthorChoice;
            break;
        case 82:
            searchBookAuthorChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }

    return 0;
}

int searchBookByAuthor(Book books[], bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int searchBookAuthorChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookAuthorChoice = 0;
        string searchBookAuthor = "";

        getUserSearchBookByAuthor(searchBookAuthor);

        if (searchBookAuthor == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        // check unwanted character
        if (!(searchBookAuthor.empty()) && searchBookAuthor[0] != '\t' && searchBookAuthor[0] != ' ')
        {
            stringToUpperCase(searchBookAuthor);

            searchAndBookListHeader();

            displaySearchBookByAuthor(books, MAXBOOK, searchBookAuthor, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption();

                int userChoice = getUserChoices();

                result = searchBookByAuthorResult(userChoice, loginSuccess, searchBookAuthorChoice, inputError);
            } while (inputError == true);
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || searchBookAuthorChoice == 82);

    return result;
}

void searchBookByCategoryHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "             CATEGORY MENU              " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select your category:" << endl;
    cout << endl;
    cout << "1. MYSTERY" << endl;
    cout << "2. ROMANCE" << endl;
    cout << "3. HISTORY" << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Enter category [1-3] that you are looking for" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=============================================" << endl;
    cout << "Please enter your option: ";
}

int searchBookByCategoryResult1(int userChoice, int &searchBookCatergoryChoice, bool &searchCategoryProceed, bool &loginSuccess, string &searchBookCatergory, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        searchBookCatergoryChoice = 49;
        searchCategoryProceed = true;
        searchBookCatergory = "MYSTERY";
        break;
    case 50:
        searchBookCatergoryChoice = 50;
        searchCategoryProceed = true;
        searchBookCatergory = "ROMANCE";
        break;
    case 51:
        searchBookCatergoryChoice = 51;
        searchCategoryProceed = true;
        searchBookCatergory = "HISTORY";
        break;
    case 66:
        searchBookCatergoryChoice = 66;
        return searchBookCatergoryChoice;
        break;
    case 72:
        searchBookCatergoryChoice = 72;
        return searchBookCatergoryChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

void displaySearchBookByCategory(int &searchBookCatergoryChoice, int &numRelevantBooks, string &searchBookCatergory, const int MAXBOOK, Book books[])
{
    searchBookCatergoryChoice = 0;

    searchAndBookListHeader();

    for (int i = 0; i < MAXBOOK; i++)
    {

        // check if category in books array is similar with user's category choice
        if (searchBookCatergory == books[i].bookCategory)
        {
            float tempBookPrice = stof(books[i].bookPrice);
            float tempRating = stof(books[i].bookRating);
            float tempPeopleRated = stof(books[i].numPeopleRating);

            ++numRelevantBooks;

            cout << endl;
            cout << "------------------------------" << endl;
            cout << "Book ISBN: " << books[i].bookId << endl;
            cout << "Book Title: " << books[i].bookTitle << endl;
            cout << "Author: " << books[i].bookAuthor << endl;
            cout << "Category: " << books[i].bookCategory << endl;
            cout << "Publisher: " << books[i].bookPublisher << endl;
            cout << "Edition: " << books[i].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "------------------------------" << endl;
            cout << endl;
        }
    }

    cout << "Total " << numRelevantBooks << " books from \"" << searchBookCatergory << "\" category are found in our system" << endl;
    cout << endl;
}

int searchBookByCategoryResult2(int userChoice, int &searchBookCatergoryChoice, bool &loginSuccess, bool &inputError)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookCatergoryChoice = 72;
            return searchBookCatergoryChoice;
        }
        else
        {
            searchBookCatergoryChoice = 80;
            return searchBookCatergoryChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookCatergoryChoice = 66;
            return searchBookCatergoryChoice;
            break;
        case 72:
            searchBookCatergoryChoice = 72;
            return searchBookCatergoryChoice;
            break;
        case 82:
            searchBookCatergoryChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }
    return 0;
}

int searchBookByCategory(Book books[], bool &loginSuccess, const int MAXBOOK)
{
    bool inputError = false;
    int searchBookCatergoryChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookCatergoryChoice = 0;
        string searchBookCatergory = "";
        bool searchCategoryProceed = false;

        searchBookByCategoryHeader();

        int userChoice = getUserChoices();

        result = searchBookByCategoryResult1(userChoice, searchBookCatergoryChoice, searchCategoryProceed, loginSuccess, searchBookCatergory, inputError);

        if (searchCategoryProceed == true)
        {

            displaySearchBookByCategory(searchBookCatergoryChoice, numRelevantBooks, searchBookCatergory, MAXBOOK, books);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption();

                int userChoice = getUserChoices();

                result = searchBookByCategoryResult2(userChoice, searchBookCatergoryChoice, loginSuccess, inputError);

            } while (inputError == true);
        }

    } while (inputError == true || searchBookCatergoryChoice == 82);

    return result;
}

void getUsersearchBookByPublisher(string &searchBookPublisher)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Input is case insensitive" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter publisher that you are looking for: " << endl;
    getline(cin, searchBookPublisher);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displaySearchBookByPublisher(Book books[], const int MAXBOOK, string &searchBookPublisher, int &numRelevantBooks)
{
    // check similar characters
    int string1Length = searchBookPublisher.length();

    for (int j = 0; j < MAXBOOK; j++)
    {
        int string2Length = books[j].bookPublisher.length();

        // check if publisher name in books array has similar characters with user input
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books[j].bookPublisher.substr(i, string1Length) == searchBookPublisher)
            {
                float tempBookPrice = stof(books[j].bookPrice);
                float tempRating = stof(books[j].bookRating);
                float tempPeopleRated = stof(books[j].numPeopleRating);

                ++numRelevantBooks;

                cout << endl;
                cout << "------------------------------" << endl;
                cout << "Book ISBN: " << books[j].bookId << endl;
                cout << "Book Title: " << books[j].bookTitle << endl;
                cout << "Author: " << books[j].bookAuthor << endl;
                cout << "Category: " << books[j].bookCategory << endl;
                cout << "Publisher: " << books[j].bookPublisher << endl;
                cout << "Edition: " << books[j].bookEdition << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }

    cout << "Total " << numRelevantBooks << " books from publisher that have \"" << searchBookPublisher << "\" in their name are found in our system" << endl;
    cout << endl;
}

int searchBookByPublisherResult(int userChoice, bool &loginSuccess, int &searchBookPublisherChoice, bool &inputError)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookPublisherChoice = 72;
            return searchBookPublisherChoice;
        }
        else
        {
            searchBookPublisherChoice = 80;
            return searchBookPublisherChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookPublisherChoice = 66;
            return searchBookPublisherChoice;
            break;
        case 72:
            searchBookPublisherChoice = 72;
            return searchBookPublisherChoice;
            break;
        case 82:
            searchBookPublisherChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }
    return 0;
}

int searchBookByPublisher(Book books[], bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int searchBookPublisherChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookPublisherChoice = 0;
        string searchBookPublisher = "";

        getUsersearchBookByPublisher(searchBookPublisher);

        if (searchBookPublisher == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        // check unwanted character
        if (!(searchBookPublisher.empty()) && searchBookPublisher[0] != '\t' && searchBookPublisher[0] != ' ')
        {
            stringToUpperCase(searchBookPublisher);

            searchAndBookListHeader();

            displaySearchBookByPublisher(books, MAXBOOK, searchBookPublisher, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption();

                int userChoice = getUserChoices();

                result = searchBookByPublisherResult(userChoice, loginSuccess, searchBookPublisherChoice, inputError);
            } while (inputError == true);
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || searchBookPublisherChoice == 82);

    return result;
}

void searchBookByPriceHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "        SEARCH FOR BOOKS BY PRICE       " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select following filter option" << endl;
    cout << endl;
    cout << "1. Higher than or equal to your price" << endl;
    cout << "2. Lower than or equal to your price" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-2] to proceed next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=======================================" << endl;
    cout << "Enter your option: ";
}

void getUserSearchBookByPrice(string &searchBookPrice)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Only accept numbers that higher than or equal to 0" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter your price: ";
    getline(cin, searchBookPrice);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayLowerThanSearchPrice(Book books[], int &numRelevantBooks, float &numBookPrice, const int MAXBOOK)
{

    searchAndBookListHeader();

    for (int i = 0; i < MAXBOOK; i++)
    {
        float tempBookPrice = stof(books[i].bookPrice);

        if (tempBookPrice <= numBookPrice)
        {
            float tempBookPrice = stof(books[i].bookPrice);
            float tempRating = stof(books[i].bookRating);
            float tempPeopleRated = stof(books[i].numPeopleRating);

            ++numRelevantBooks;

            cout << endl;
            cout << "------------------------------" << endl;
            cout << "Book ISBN: " << books[i].bookId << endl;
            cout << "Book Title: " << books[i].bookTitle << endl;
            cout << "Author: " << books[i].bookAuthor << endl;
            cout << "Category: " << books[i].bookCategory << endl;
            cout << "Publisher: " << books[i].bookPublisher << endl;
            cout << "Edition: " << books[i].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;

            cout << "------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are lower than / equal to RM " << showpoint << fixed << setprecision(2) << numBookPrice << " are found in our system" << endl;
    cout << endl;
}

void displayHigherThanSearchPrice(Book books[], int &numRelevantBooks, float &numBookPrice, const int MAXBOOK)
{

    searchAndBookListHeader();

    for (int i = 0; i < MAXBOOK; i++)
    {
        float tempBookPrice = stof(books[i].bookPrice);

        if (tempBookPrice >= numBookPrice)
        {
            float tempBookPrice = stof(books[i].bookPrice);
            float tempRating = stof(books[i].bookRating);
            float tempPeopleRated = stof(books[i].numPeopleRating);

            ++numRelevantBooks;

            cout << endl;
            cout << "------------------------------" << endl;
            cout << "Book ISBN: " << books[i].bookId << endl;
            cout << "Book Title: " << books[i].bookTitle << endl;
            cout << "Author: " << books[i].bookAuthor << endl;
            cout << "Category: " << books[i].bookCategory << endl;
            cout << "Publisher: " << books[i].bookPublisher << endl;
            cout << "Edition: " << books[i].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;

            cout << "------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are higher than / equal to RM " << showpoint << fixed << setprecision(2) << numBookPrice << " are found in our system" << endl;
    cout << endl;
}

int searchBookByPriceResult1(int &userChoice, int &searchBookPriceChoice, bool &inputError, bool &searchPriceProceed)
{
    switch (userChoice)
    {
    case 49:
        searchBookPriceChoice = 49;
        searchPriceProceed = true;
        break;
    case 50:
        searchBookPriceChoice = 50;
        searchPriceProceed = true;
        break;
    case 66:
        searchBookPriceChoice = 66;
        return searchBookPriceChoice;
        break;
    case 72:
        searchBookPriceChoice = 72;
        return searchBookPriceChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }
    return 0;
}

int searchBookByPriceResult2(int &userChoice, bool &inputError, bool &loginSuccess, int &searchBookPriceChoice)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookPriceChoice = 72;
            return searchBookPriceChoice;
        }
        else
        {
            searchBookPriceChoice = 80;
            return searchBookPriceChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookPriceChoice = 66;
            return searchBookPriceChoice;
            break;
        case 72:
            searchBookPriceChoice = 72;
            return searchBookPriceChoice;
            break;
        case 82:
            searchBookPriceChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }

    return 0;
}

int searchBookByPriceResult3(int &userChoice, bool &inputError, bool &loginSuccess, int &searchBookPriceChoice)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookPriceChoice = 72;
            return searchBookPriceChoice;
        }
        else
        {
            searchBookPriceChoice = 80;
            return searchBookPriceChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookPriceChoice = 66;
            return searchBookPriceChoice;
            break;
        case 72:
            searchBookPriceChoice = 72;
            return searchBookPriceChoice;
            break;
        case 82:
            searchBookPriceChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }

    return 0;
}

int searchBookByPrice(Book books[], bool &loginSuccess, const int MAXBOOK)
{
    bool inputError = false;
    int searchBookPriceChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        searchBookPriceChoice = 0;
        int numRelevantBooks = 0;
        string searchBookPrice = "";
        bool searchPriceProceed = false;

        searchBookByPriceHeader();

        int userChoice = getUserChoices();

        result = searchBookByPriceResult1(userChoice, searchBookPriceChoice, inputError, searchPriceProceed);

        if (searchPriceProceed == true)
        {
            do
            {
                inputError = false;

                getUserSearchBookByPrice(searchBookPrice);

                if (searchBookPrice == "-999")
                {
                    int backHomePage = 72;

                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You had entered \"-999\". Now redirected back to homepage...";
                    cout << endl;

                    return backHomePage;
                }

                const string specialChars = "~`!@#$%^&*()_+-=|\\}]{['\":;/?>,<] \t^";
                const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

                // check if user input is invalid
                if (searchBookPrice.find_first_of(specialChars) != string::npos || searchBookPrice.find_first_of(alphabets) != string::npos || searchBookPrice[0] == '.' || searchBookPrice.empty())
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Something wrong with your input. Please try again..." << endl;

                    inputError = true;
                }
                else
                {
                    float tempFloatSearchBookPrice = stof(searchBookPrice);

                    if (tempFloatSearchBookPrice >= 0)
                    {
                        float numBookPrice;
                        stringstream ss(searchBookPrice);

                        ss >> numBookPrice;

                        /*
                        Check condition
                        ss.fail() == check if ss string able convert into float
                        !ss.eof() == check whether got missout string in ss eg. float "1.2gs5"
                        (searchBookPrice.empty()) == check if submmision is empty
                        (searchBookPrice[0] == '\t') == check if no unwanted whitespace
                        (searchBookPrice[0] == ' ') == check if no unwanted whitespace
                        */
                        if (ss.fail() || !ss.eof() || (searchBookPrice.empty()) || searchBookPrice[0] == '\t' || searchBookPrice[0] == ' ' || searchBookPrice[0] == '.')
                        {
                            ss.clear();
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << "You entered invalid price number. Please try again..." << endl;
                            inputError = true;
                        }
                        else
                        {
                            if (searchBookPriceChoice == 49)
                            {

                                displayHigherThanSearchPrice(books, numRelevantBooks, numBookPrice, MAXBOOK);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption();

                                    int userChoice = getUserChoices();

                                    result = searchBookByPriceResult2(userChoice, inputError, loginSuccess, searchBookPriceChoice);

                                } while (inputError == true);
                            }
                            else if (searchBookPriceChoice == 50)
                            {

                                displayLowerThanSearchPrice(books, numRelevantBooks, numBookPrice, MAXBOOK);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption();

                                    int userChoice = getUserChoices();

                                    result = searchBookByPriceResult3(userChoice, inputError, loginSuccess, searchBookPriceChoice);

                                } while (inputError == true);
                            }
                        }
                    }
                    else if (tempFloatSearchBookPrice < 0)
                    {
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Something wrong with your input. Please try again..." << endl;

                        inputError = true;
                    }
                }

            } while (inputError == true);
        }

    } while (inputError == true || searchBookPriceChoice == 82);

    return result;
}

void searchBookByRatingHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "       SEARCH FOR BOOKS BY RATING       " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select following filter option" << endl;
    cout << endl;
    cout << "1. Higher than or equal to your rating" << endl;
    cout << "2. Lower than or equal to your rating" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-2] to proceed next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=======================================" << endl;
    cout << "Enter your option: ";
}

void getUserSearchBookByRating(string &searchBookRating)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Only accept numbers from 0 to 5" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "3. Not accept whitespace character as input" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter your rating: ";
    getline(cin, searchBookRating);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayHigherThanSearchRating(Book books[], int &numRelevantBooks, float &numBookRating, const int MAXBOOK)
{
    searchAndBookListHeader();

    for (int i = 0; i < MAXBOOK; i++)
    {
        float tempBookRating = stof(books[i].bookRating);

        if (tempBookRating >= numBookRating)
        {
            float tempBookPrice = stof(books[i].bookPrice);
            float tempRating = stof(books[i].bookRating);
            float tempPeopleRated = stof(books[i].numPeopleRating);

            ++numRelevantBooks;

            cout << endl;
            cout << "------------------------------" << endl;
            cout << "Book ISBN: " << books[i].bookId << endl;
            cout << "Book Title: " << books[i].bookTitle << endl;
            cout << "Author: " << books[i].bookAuthor << endl;
            cout << "Category: " << books[i].bookCategory << endl;
            cout << "Publisher: " << books[i].bookPublisher << endl;
            cout << "Edition: " << books[i].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;

            cout << "------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are higher than / equal to " << showpoint << fixed << setprecision(2) << numBookRating << " rating are found in our system" << endl;
    cout << endl;
}

void displayLowerThanSearchRating(Book books[], int &numRelevantBooks, float &numBookRating, const int MAXBOOK)
{
    searchAndBookListHeader();

    for (int i = 0; i < MAXBOOK; i++)
    {
        float tempBookRating = stof(books[i].bookRating);

        if (tempBookRating <= numBookRating)
        {
            float tempBookPrice = stof(books[i].bookPrice);
            float tempRating = stof(books[i].bookRating);
            float tempPeopleRated = stof(books[i].numPeopleRating);

            ++numRelevantBooks;

            cout << endl;
            cout << "------------------------------" << endl;
            cout << "Book ISBN: " << books[i].bookId << endl;
            cout << "Book Title: " << books[i].bookTitle << endl;
            cout << "Author: " << books[i].bookAuthor << endl;
            cout << "Category: " << books[i].bookCategory << endl;
            cout << "Publisher: " << books[i].bookPublisher << endl;
            cout << "Edition: " << books[i].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "------------------------------" << endl;
            cout << endl;
        }
    }

    cout << "Total " << numRelevantBooks << " books are lower than / equal to " << showpoint << fixed << setprecision(2) << numBookRating << " rating are found in our system" << endl;
    cout << endl;
}

int searchBookByRatingResult1(int &userChoice, int &searchBookRatingChoice, bool &inputError, bool &searchRatingProceed)
{
    switch (userChoice)
    {
    case 49:
        searchBookRatingChoice = 49;
        searchRatingProceed = true;
        break;
    case 50:
        searchBookRatingChoice = 50;
        searchRatingProceed = true;
        break;
    case 66:
        searchBookRatingChoice = 66;
        return searchBookRatingChoice;
        break;
    case 72:
        searchBookRatingChoice = 72;
        return searchBookRatingChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }
    return 0;
}

int searchBookByRatingResult2(int &userChoice, bool &inputError, bool &loginSuccess, int &searchBookRatingChoice)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookRatingChoice = 72;
            return searchBookRatingChoice;
        }
        else
        {
            searchBookRatingChoice = 80;
            return searchBookRatingChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookRatingChoice = 66;
            return searchBookRatingChoice;
            break;
        case 72:
            searchBookRatingChoice = 72;
            return searchBookRatingChoice;
            break;
        case 82:
            searchBookRatingChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }

    return 0;
}

int searchBookByRatingResult3(int &userChoice, bool &inputError, bool &loginSuccess, int &searchBookRatingChoice)
{
    if (userChoice == 80)
    {
        if (loginSuccess == false)
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Notice: " << endl;
            cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Redirected back to homepage..." << endl;
            searchBookRatingChoice = 72;
            return searchBookRatingChoice;
        }
        else
        {
            searchBookRatingChoice = 80;
            return searchBookRatingChoice;
        }
    }
    else
    {
        switch (userChoice)
        {
        case 66:
            searchBookRatingChoice = 66;
            return searchBookRatingChoice;
            break;
        case 72:
            searchBookRatingChoice = 72;
            return searchBookRatingChoice;
            break;
        case 82:
            searchBookRatingChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
            break;
        }
    }

    return 0;
}

int searchBookByRating(Book books[], bool &loginSuccess, const int MAXBOOK)
{
    bool inputError = false;
    int searchBookRatingChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        searchBookRatingChoice = 0;
        int numRelevantBooks = 0;
        string searchBookRating = "";
        bool searchRatingProceed = false;

        searchBookByRatingHeader();

        int userChoice = getUserChoices();

        result = searchBookByRatingResult1(userChoice, searchBookRatingChoice, inputError, searchRatingProceed);

        if (searchRatingProceed == true)
        {
            do
            {
                inputError = false;

                getUserSearchBookByRating(searchBookRating);

                if (searchBookRating == "-999")
                {
                    int backHomePage = 72;

                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You had entered \"-999\". Now redirected back to homepage...";
                    cout << endl;

                    return backHomePage;
                }

                const string specialChars = "~`!@#$%^&*()_+-=|\\}]{['\":;/?>,<] \t^";
                const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

                // check if user input is invalid
                if (searchBookRating.find_first_of(specialChars) != string::npos || searchBookRating.find_first_of(alphabets) != string::npos || searchBookRating[0] == '.' || searchBookRating.empty())
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Something wrong with your input. Please try again..." << endl;

                    inputError = true;
                }
                else
                {
                    float tempFloatSearchBookRating = stof(searchBookRating);

                    if (tempFloatSearchBookRating >= 0 && 5 >= tempFloatSearchBookRating)
                    {
                        float numBookRating;
                        stringstream ss(searchBookRating);

                        ss >> numBookRating;

                        /*
                        Check condition
                        ss.fail() == check if ss string able convert into float
                        !ss.eof() == check whether got missout string in ss eg. float "1.2gs5"
                        (searchBookRating.empty()) == check if submmision is empty
                        (searchBookRating[0] == '\t') == check if no unwanted whitespace
                        (searchBookRating[0] == ' ') == check if no unwanted whitespace
                        */
                        if (ss.fail() || !ss.eof() || (searchBookRating.empty()) || searchBookRating[0] == '\t' || searchBookRating[0] == ' ' || searchBookRating[0] == '.')
                        {
                            ss.clear();
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << "You entered invalid rating number. Please try again..." << endl;
                            inputError = true;
                        }
                        else
                        {
                            if (searchBookRatingChoice == 49)
                            {

                                displayHigherThanSearchRating(books, numRelevantBooks, numBookRating, MAXBOOK);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption();

                                    int userChoice = getUserChoices();

                                    result = searchBookByRatingResult2(userChoice, inputError, loginSuccess, searchBookRatingChoice);

                                } while (inputError == true);
                            }
                            else if (searchBookRatingChoice == 50)
                            {

                                displayLowerThanSearchRating(books, numRelevantBooks, numBookRating, MAXBOOK);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption();

                                    int userChoice = getUserChoices();

                                    result = searchBookByRatingResult3(userChoice, inputError, loginSuccess, searchBookRatingChoice);

                                } while (inputError == true);
                            }
                        }
                    }
                    else
                    {
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Something wrong with your input. Please try again..." << endl;

                        inputError = true;
                    }
                }

            } while (inputError == true);
        }

    } while (inputError == true || searchBookRatingChoice == 82);

    return result;
}

void storePurchase(bool &loginSuccess, bool &purchaseBooks, bool &backHomePage)
{
    if (loginSuccess == true)
    {
        purchaseBooks = true;
    }
    else
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "Notice: " << endl;
        cout << "In order to make purchase, you should register/login \nyour account first..." << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Redirected back to homepage..." << endl;
        backHomePage = true;
    }
}

int update_BookRating(Book books[], const int MAXBOOK, int storesChoice)
{
    const string specialChars_Rating = "~`!@#$%^&*()_+=|\\}]{['\":;-/?>,<] \0\t^\n";
    const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    string userBookISBN = "", userRating = "";
    char newName[20];
    bool inputError = false;

    do
    {
        inputError = false;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "========================================" << endl;
        cout << "             Give Book Rating           " << endl;
        cout << "========================================" << endl;
        cout << endl;
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "Notice:" << endl;
        cout << "1. Only accept rating from 0 to 5" << endl;
        cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
        cout << "3. Not accept whitespace character as input" << endl;
        cout << "4. Enter exactly for book ISBN input to select your book" << endl;
        cout << "5. Only can select book in each individual store" << endl;
        cout << "=====================================================" << endl;
        cout << "Please enter your book ISBN: ";
        getline(cin, userBookISBN);
        cout << "Please enter your rating: ";
        getline(cin, userRating);
        cout << "Press enter again to proceed...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (userRating == "-999" || userBookISBN == "-999")
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return 72;
        }

        // check if user input is invalid
        if (userBookISBN.length() != 14 || userBookISBN[3] != '-' || userBookISBN.find_first_of(alphabets) != string::npos || userRating.find_first_of(alphabets) != string::npos || userRating.find_first_of(specialChars_Rating) != string::npos || userRating[0] == '.' || userRating.empty())
        {
            inputError = true;
        }
        else
        {
            float tempFloatUserRating = stof(userRating);

            // check if user input rating is within 0-5
            if (tempFloatUserRating < 0.0 || tempFloatUserRating > 5.0)
            {
                inputError = true;
            }
            else
            {
                for (int i = 0; i < MAXBOOK; i++)
                {
                    if (books[i].bookId == userBookISBN)
                    {

                        float bookRatingNum = stof(books[i].bookRating);
                        float peopleRatingNum = stof(books[i].numPeopleRating);
                        float totalPeopleRated = bookRatingNum * peopleRatingNum;
                        peopleRatingNum += 1;

                        float ratingNum = stof(userRating);

                        float finalrating = (totalPeopleRated + ratingNum) / (peopleRatingNum);

                        books[i].bookRating = to_string(finalrating);
                        books[i].numPeopleRating = to_string(peopleRatingNum);

                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "-------------------------------------" << endl;
                        cout << "Updated rating for this book is:" << endl;
                        cout << endl;
                        cout << "Book Title: " << books[i].bookTitle << endl;
                        cout << "Rating: " << fixed << setprecision(2) << finalrating << endl;
                        cout << "Number of people rate: " << fixed << setprecision(0) << peopleRatingNum << endl;
                        cout << "-------------------------------------" << endl;

                        // update new rating of the book in respective csv file
                        fstream temporaryBookstore("temporaryBookstore.csv", ios::out);

                        if (temporaryBookstore)
                        {
                            temporaryBookstore << "ISBN, Title, Author, Category, Publisher, Edition, Price, Rating, Number of people rate"
                                               << "\n";

                            for (int i = 0; i < MAXBOOK; i++)
                            {

                                temporaryBookstore << books[i].bookId << "," << books[i].bookTitle << "," << books[i].bookAuthor << "," << books[i].bookCategory << "," << books[i].bookPublisher << "," << books[i].bookEdition << "," << books[i].bookPrice << "," << books[i].bookRating << "," << books[i].numPeopleRating << "\n";
                            }

                            temporaryBookstore.close();

                            if (storesChoice == 1)
                            {
                                char fileName[] = "BookstoreA.csv";

                                strncpy(newName, fileName, 20);
                            }
                            else if (storesChoice == 2)
                            {
                                char fileName[] = "BookstoreB.csv";

                                strncpy(newName, fileName, 20);
                            }
                            else
                            {
                                char fileName[] = "BookstoreC.csv";

                                strncpy(newName, fileName, 20);
                            }

                            int status = remove(newName);

                            char oldname[] = "temporaryBookstore.csv";

                            rename(oldname, newName);

                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << "Rating of the book updated!" << endl;
                            cout << "Back to previous page" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;

                            return 66;
                        }
                    }
                }
            }
        }

        inputError = true;

        if (inputError == true)
        {
            cout << "Invalid input!" << endl;
        }

    } while (inputError == true);

    return 0;
}

int write_Order_File(Cart cart[], const int MAXCART, string loginUserName, int &numberOfOrders, Order orders[])
{
    // update new order values into csv file
    fstream temporaryOrder("temporaryOrders.csv", ios::out);

    if (temporaryOrder)
    {

        temporaryOrder << "username,orderStatus,isbn,bookTitle,quantity\n";

        for (int i = 0; i < numberOfOrders; i++)
        {

            temporaryOrder << orders[i].username << "," << orders[i].orderStatus << ",";

            for (int j = 0; j < orders[i].bookId.size(); j++)
            {
                temporaryOrder << orders[i].bookId[j];

                if (j != orders[i].bookId.size() - 1)
                {
                    temporaryOrder << ";";
                }
            }

            temporaryOrder << ",";

            for (int j = 0; j < orders[i].bookTitle.size(); j++)
            {
                temporaryOrder << orders[i].bookTitle[j];

                if (j != orders[i].bookTitle.size() - 1)
                {
                    temporaryOrder << ";";
                }
            }

            temporaryOrder << ",";

            for (int j = 0; j < orders[i].quantity.size(); j++)
            {
                temporaryOrder << orders[i].quantity[j];
                if (j != orders[i].quantity.size() - 1)
                {
                    temporaryOrder << ";";
                }
            }

            temporaryOrder << "\n";
        }

        temporaryOrder << loginUserName << ","
                       << "Delivering,";

        for (int j = 0; j < cart[MAXCART - 1].bookId.size(); j++)
        {
            temporaryOrder << cart[MAXCART - 1].bookId[j];
            if (j != cart[MAXCART - 1].bookId.size() - 1)
            {
                temporaryOrder << ";";
            }
        }

        temporaryOrder
            << ",";

        for (int j = 0; j < cart[MAXCART - 1].bookTitle.size(); j++)
        {
            temporaryOrder << cart[MAXCART - 1].bookTitle[j];
            if (j != cart[MAXCART - 1].bookTitle.size() - 1)
            {
                temporaryOrder << ";";
            }
        }

        temporaryOrder
            << ",";

        for (int j = 0; j < cart[MAXCART - 1].quantity.size(); j++)
        {
            temporaryOrder << cart[MAXCART - 1].quantity[j];
            if (j != cart[MAXCART - 1].quantity.size() - 1)
            {
                temporaryOrder << ";";
            }
        }

        temporaryOrder.close();

        char existingFileName[] = "Orders.csv";
        int status = remove(existingFileName);
        if (status != 0)
            cout << "File Deleted Error Occurred!\n";

        char oldname[] = "temporaryOrders.csv";
        char newname[] = "Orders.csv";

        if (rename(oldname, newname) != 0)
            perror("Error renaming file");
    }

    return 0;
}

string checkStoreName(int storesChoice)
{
    string storeName = "";

    if (storesChoice == 1)
    {
        storeName = "BOOK STORE A";
    }
    else if (storesChoice == 2)
    {
        storeName = "BOOK STORE B";
    }
    else
    {
        storeName = "BOOK STORE C";
    }

    return storeName;
}

void displayPurchaseMenu(string storeName)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "       " << storeName << " PURCHASE MENU" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select options below to proceed: " << endl;
    cout << endl;
    cout << "1. Add books into cart (with Book ISBN)" << endl;
    cout << "2. Clear cart" << endl;
    cout << "3. View cart & make payment" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-3] to proceed next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=======================================" << endl;
    cout << "Please enter your option: ";
}

int purchaseBooksActionResult(int &userChoice, int &purchaseBooksActionChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 66:
        purchaseBooksActionChoice = 66;
        return purchaseBooksActionChoice;
        break;
    case 72:
        purchaseBooksActionChoice = 72;
        return purchaseBooksActionChoice;
        break;
    case 51:
        purchaseBooksActionChoice = 86;
        break;
    case 50:
        purchaseBooksActionChoice = 67;
        break;
    case 49:
        purchaseBooksActionChoice = 65;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

void get_BookID_Quantity(string &bookId, string &quantity)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Enter exactly for Book ISBN input" << endl;
    cout << "2. Only accept numbers that higher than 0 for Quantity\n    input" << endl;
    cout << "3. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "4. Only accept book ISBN from your selected bookstore" << endl;
    cout << "5. Not accept whitespace character as input" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter book ISBN to select book to purchase " << endl;
    cout << "Book ISBN: ";
    getline(cin, bookId);
    cout << "Quantity: ";
    getline(cin, quantity);
}

void display_Purchase_InputError()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Something wrong with your input. Please try again..." << endl;
}

void add_NewQuantity_to_ExistingItem(string bookId, Cart cart[], const int &MAXCART, int numQuantity, bool &isAddNewQuantitytoExistingCart, Book books[], int i)
{

    for (int j = 0; j < cart[MAXCART - 1].bookId.size(); j++)
    {
        if (bookId == cart[MAXCART - 1].bookId[j])
        {
            // get old quantity and add together new quantity. Then add to cart array
            string originalQuantity = cart[MAXCART - 1].quantity[j];
            float numOriginalQuantity = stof(originalQuantity);
            int totalQuantity = numQuantity + numOriginalQuantity;
            string stringTotalQuantity = to_string(totalQuantity);
            cart[MAXCART - 1].quantity[j] = stringTotalQuantity;

            // calculate new total price and add to cart array
            float tempFloatBookPrice = stof(books[i].bookPrice);

            float originalTotalPrice = cart[MAXCART - 1].totalPrice;

            float totalPrice = tempFloatBookPrice * numQuantity;

            totalPrice += originalTotalPrice;

            cart[MAXCART - 1].totalPrice = totalPrice;

            isAddNewQuantitytoExistingCart = true;

            break;
        }
    }
}

void add_NewQuantity_to_NewItem(bool &isAddNewQuantitytoExistingCart, Cart cart[], const int &MAXCART, string bookId, string quantity, Book books[], int i)
{
    if (isAddNewQuantitytoExistingCart == false)
    {
        // add new values into cart array
        cart[MAXCART - 1].bookId.push_back(bookId);
        cart[MAXCART - 1].bookTitle.push_back(books[i].bookTitle);
        cart[MAXCART - 1].quantity.push_back(quantity);

        float numQuantity = stof(quantity);
        float tempFloatBookPrice = stof(books[i].bookPrice);

        float totalPrice = tempFloatBookPrice * numQuantity;
        cart[MAXCART - 1].totalPrice += totalPrice;
    }
}

void display_SuccessAddCart(string bookId, Book books[], float tempBookPrice, float tempQuantity, int i)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "Sucessfully added this item to your cart!" << endl;
    cout << endl;
    cout << "Book ISBN: " << bookId << endl;
    cout << "Book Title: " << books[i].bookTitle << endl;
    cout << "Unit Price: RM " << fixed << setprecision(2) << showpoint << tempBookPrice << endl;
    cout << "Quantity: " << fixed << setprecision(0) << noshowpoint << tempQuantity << endl;
    cout << endl;
}

void display_isBookIdExist_Option()
{
    cout << "----------------------------------------" << endl;
    cout << "Enter [A] to add books into cart (with Book ISBN)" << endl;
    cout << "Enter [C] to clear cart" << endl;
    cout << "Enter [V] to proceed to next page to view cart" << endl;
    cout << "Enter [B] to back to book store menu page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your option: ";
}

int display_isBookIdExist_Result(int userChoice, int &purchaseBooksActionChoice, bool &addToCartTryAgain, bool &inputError, bool &isAddMoreBook)
{
    switch (userChoice)
    {
    case 66:
        purchaseBooksActionChoice = 66;
        return purchaseBooksActionChoice;
        break;
    case 72:
        purchaseBooksActionChoice = 72;
        return purchaseBooksActionChoice;
        break;
    case 86:
        purchaseBooksActionChoice = 86;
        break;
    case 67:
        purchaseBooksActionChoice = 67;
        break;
    case 65:
        purchaseBooksActionChoice = 65;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        addToCartTryAgain = true;
        inputError = false;
        isAddMoreBook = false;
        break;
    }

    return 0;
}

void display_CartList(const int &MAXCART, Cart cart[], float &totalQuantity, float &unitPrice, float &unitQuantity, float &totalPrice)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "=====================================================" << endl;
    cout << "                   CART LISTING MENU                 " << endl;
    cout << "=====================================================" << endl;
    cout << endl;
    cout << endl;
    cout << "Cart Information" << endl;
    cout << "---------------" << endl;
    cout << endl;

    // display all item information in cart
    for (int i = 0; i < cart[MAXCART - 1].bookId.size(); i++)
    {

        float tempQuantity = stof(cart[MAXCART - 1].quantity[i]);

        cout << "Book ISBN: " << cart[MAXCART - 1].bookId[i] << endl;
        cout << "Book Title: " << cart[MAXCART - 1].bookTitle[i] << endl;
        cout << "Quantity: " << fixed << setprecision(0) << noshowpoint << tempQuantity << endl;
        cout << "-----------------------------------" << endl;

        float floatQuantity = stof(cart[MAXCART - 1].quantity[i]);
        totalQuantity += floatQuantity;
    }

    totalPrice = cart[MAXCART - 1].totalPrice;

    cout << "Total book quantity: " << setprecision(0) << noshowpoint << totalQuantity << endl;
    cout << "Total price: RM " << fixed << setprecision(2) << totalPrice << endl;
}

void clear_CartList(Cart cart[], const int &MAXCART)
{
    cart[MAXCART - 1].bookId.clear();
    cart[MAXCART - 1].bookTitle.clear();
    cart[MAXCART - 1].quantity.clear();
    cart[MAXCART - 1].totalPrice = 0;
}

void display_ClearCart_Message()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "Your cart is cleared..." << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Redirected to purchase menu..." << endl;
}

void display_CartList_Option()
{
    cout << "-----------------------------------------------------" << endl;
    cout << "Enter [P] to proceed to make payment" << endl;
    cout << "Enter [C] to clear cart" << endl;
    cout << "Enter [B] to back to purchase menu (add book to cart)" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter your option: ";
}

int display_CartList_Result(int userChoice, bool &inputError, int &purchaseBooksActionChoice, bool &addToCartTryAgain, bool &isAddMoreBook, bool &cartListTryAgain)
{

    switch (userChoice)
    {
    case 66:
        inputError = true;
        break;
    case 72:
        purchaseBooksActionChoice = 72;
        return purchaseBooksActionChoice;
        break;
    case 67:
        purchaseBooksActionChoice = 67;
        break;
    case 80:
        purchaseBooksActionChoice = 80;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        addToCartTryAgain = false;
        inputError = false;
        isAddMoreBook = false;
        cartListTryAgain = true;
        break;
    }

    return 0;
}

void display_isBookIdExistFalse_Option()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Something wrong with your input. Please try again..." << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [R] to try again" << endl;
    cout << "Enter [B] to back to purchase menu page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=======================================" << endl;
    cout << "Please enter your option: ";
}

int display_isBookIdExistFalse_Result(int userChoice, bool &inputError, int &purchaseBooksActionChoice, bool &isAddMoreBook, bool &isBookIdExistOptionTryAgain)
{
    switch (userChoice)
    {
    case 66:
        inputError = true;
        break;
    case 72:
        purchaseBooksActionChoice = 72;
        return purchaseBooksActionChoice;
        break;
    case 82:
        isAddMoreBook = true;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        isBookIdExistOptionTryAgain = true;
        break;
    }

    return 0;
}

void display_PaymentMenu()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "=====================================================" << endl;
    cout << "                     PAYMENT MENU                    " << endl;
    cout << "=====================================================" << endl;
    cout << endl;
    cout << endl;
}

void get_PaymentInfo(string &bankNumber, string &csv, string &otp, string &address)
{
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Only accept atleast 5 digits for \"Bank card number\" \n   \"CSV\" \"OTP\" input" << endl;
    cout << "2. Only accept \",\" and at least 5 characters \n   as \"Delivery address\" input" << endl;
    cout << "3. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "4. Not accept whitespace characters for \"Bank card number\" \n   \"CSV\" \"OTP\" input" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter following information to make payment " << endl;
    cout << "Bank card number: ";
    getline(cin, bankNumber);
    cout << "CSV: ";
    getline(cin, csv);
    cout << "OTP: ";
    getline(cin, otp);
    cout << "Delivery address: ";
    getline(cin, address);
}

void display_PaymentDone_Message()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "Payment Done!" << endl;
    cout << endl;
    cout << "Thank you so much!" << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Redirected to homepage..." << endl;
}

int receive_Payment(int &paymentChoice, const int &MAXCART, Cart cart[], int &numberOfOrders, Order orders[], bool &purchaseBooks, string loginUserName, int &purchaseBooksActionChoice, bool &addToCartTryAgain, bool &inputError, bool &isAddMoreBook, bool &cartListTryAgain, const int MAXBOOK, string storeName)
{
    int result = 0;
    paymentChoice = 0;

    string bankNumber = "", csv = "", otp = "", address = "";

    display_PaymentMenu();

    get_PaymentInfo(bankNumber, csv, otp, address);

    if (bankNumber == "-999" || csv == "-999" || otp == "-999" || address == "-999")
    {
        int backHomePage = 72;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You had entered \"-999\". Now redirected back to homepage...";
        cout << endl;

        return backHomePage;
    }

    const string specialCharsForAddress = "\t~`!@#$%^&*()_+-=|\\}]{['\":;/?><]^";

    bool onlyDigits = true;

    // check if banknumber is digit only
    for (char c : bankNumber)
    {
        if (!isdigit(c))
        {
            onlyDigits = false;
            break;
        }
    }

    // check if csv is digit only
    for (char c : csv)
    {
        if (!isdigit(c))
        {
            onlyDigits = false;
            break;
        }
    }

    // check if otp is digit only
    for (char c : otp)
    {
        if (!isdigit(c))
        {
            onlyDigits = false;
            break;
        }
    }

    // check if all inputs is valid
    if (address.length() >= 5 && bankNumber.length() >= 5 && csv.length() >= 5 && otp.length() >= 5 && onlyDigits && !(bankNumber.empty() || csv.empty() || otp.empty() || address.empty()) && (address.find_first_of(specialCharsForAddress) == string::npos) && address[0] != ' ')
    {
        // check if number of orders exceed 30
        if (numberOfOrders + 1 > 30)
        {
            cout << "You have exceed system capacity! Exiting the program now..." << endl;
            exit(1);
        }

        display_PaymentDone_Message();

        write_Order_File(cart, MAXCART, loginUserName, numberOfOrders, orders);

        purchaseBooks = false;

        clear_CartList(cart, MAXCART);

        purchaseBooksActionChoice = 72;
        return purchaseBooksActionChoice;
    }
    else
    {

        bool paymentOptionError = false;

        do
        {
            paymentOptionError = false;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Something wrong with your input. Please try again..." << endl;
            cout << "-----------------------------------" << endl;
            cout << "Enter [R] to try again to make payment" << endl;
            cout << "Enter [B] to back to purchase menu" << endl;
            cout << "Enter [H] to back to homepage" << endl;
            cout << "Enter [X] to exit the program" << endl;
            cout << "===================================" << endl;
            cout << "Please enter your option: ";

            int userChoice = getUserChoices();

            switch (userChoice)
            {
            case 66:
                addToCartTryAgain = false;
                inputError = true;
                isAddMoreBook = false;
                cartListTryAgain = false;
                paymentOptionError = false;
                break;
            case 72:
                paymentChoice = 72;
                return paymentChoice;
                break;
            case 82:
                paymentChoice = 82;
                addToCartTryAgain = false;
                inputError = false;
                isAddMoreBook = false;
                cartListTryAgain = false;
                paymentOptionError = false;
                break;
            case 88:
                cout << "You exit the program...";
                exit(1);
                break;
            default:
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "You enter wrongly. Please try again..." << endl;
                addToCartTryAgain = false;
                inputError = false;
                isAddMoreBook = false;
                cartListTryAgain = false;
                paymentOptionError = true;
                break;
            }
        } while (paymentOptionError == true);
    }

    return result;
}

int purchaseBooksAction(Book books[], const int MAXBOOK, const int MAXCART, Cart cart[], bool &purchaseBooks, string loginUserName, Order orders[], int &numberOfOrders, int storesChoice)
{
    string bookId = "", quantity = "";
    bool isBookIdExist = false;
    bool inputError = false;
    bool isAddMoreBook = false;
    bool addToCartTryAgain = false;
    bool cartListTryAgain = false;
    int result = 0;

    do
    {

        int purchaseBooksActionChoice = 0;
        inputError = false;
        isAddMoreBook = false;
        purchaseBooks = false;

        string storeName = checkStoreName(storesChoice);

        displayPurchaseMenu(storeName);

        int userChoice = getUserChoices();

        result = purchaseBooksActionResult(userChoice, purchaseBooksActionChoice, inputError);

        if (purchaseBooksActionChoice == 65)
        {
            do
            {
                isAddMoreBook = false;
                inputError = false;
                isBookIdExist = false;

                get_BookID_Quantity(bookId, quantity);

                if (bookId == "-999" || quantity == "-999")
                {
                    int backHomePage = 72;

                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You had entered \"-999\". Now redirected back to homepage...";
                    cout << endl;

                    return backHomePage;
                }

                const string specialChars = "~`!@#$%^&*()_+=|\\}]{['\":;/?>,<]. \t^";
                const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

                // check if user input is invalid
                if (quantity.find_first_of(specialChars) != string::npos || (quantity.empty()) || (bookId.empty()) || bookId[0] == '\t' || bookId[0] == ' ' || quantity[0] == '\t' || quantity[0] == ' ' || quantity.find_first_of(alphabets) != string::npos)
                {

                    display_Purchase_InputError();

                    inputError = true;
                }
                else
                {
                    int checkNumQuantity = stof(quantity);

                    if (checkNumQuantity > 0)
                    {
                        // numQuantity put into stringstream sq. Then extract back to numQuantiy. If the value unable to convert float, it will create flag error
                        float numQuantity;
                        stringstream sq(quantity);
                        sq >> numQuantity;

                        // check if user input is invalid
                        if (sq.fail() || !sq.eof() || (quantity.empty()) || quantity[0] == '\t' || quantity[0] == ' ' || (quantity.find('.') != -1))
                        {

                            sq.clear();

                            display_Purchase_InputError();

                            isAddMoreBook = true;
                        }
                        else
                        {
                            for (int i = 0; i < MAXBOOK; i++)
                            {
                                if (bookId == books[i].bookId)
                                {
                                    bool isAddNewQuantitytoExistingCart = false;

                                    add_NewQuantity_to_ExistingItem(bookId, cart, MAXCART, numQuantity, isAddNewQuantitytoExistingCart, books, i);

                                    add_NewQuantity_to_NewItem(isAddNewQuantitytoExistingCart, cart, MAXCART, bookId, quantity, books, i);

                                    float tempBookPrice = stof(books[i].bookPrice);
                                    float tempQuantity = stof(quantity);

                                    display_SuccessAddCart(bookId, books, tempBookPrice, tempQuantity, i);

                                    isBookIdExist = true;
                                }
                            }

                            if (isBookIdExist == true)
                            {

                                do
                                {
                                    addToCartTryAgain = false;

                                    display_isBookIdExist_Option();

                                    int userChoice = getUserChoices();

                                    result = display_isBookIdExist_Result(userChoice, purchaseBooksActionChoice, addToCartTryAgain, inputError, isAddMoreBook);

                                } while (addToCartTryAgain == true);

                                if (purchaseBooksActionChoice == 86)
                                {
                                    float totalQuantity = 0;
                                    float totalPrice = 0;
                                    float unitPrice = 0;
                                    float unitQuantity = 0;
                                    purchaseBooksActionChoice = 0;

                                    display_CartList(MAXCART, cart, totalQuantity, unitPrice, unitQuantity, totalPrice);

                                    do
                                    {
                                        cartListTryAgain = false;

                                        display_CartList_Option();

                                        int userChoice = getUserChoices();

                                        result = display_CartList_Result(userChoice, inputError, purchaseBooksActionChoice, addToCartTryAgain, isAddMoreBook, cartListTryAgain);

                                    } while (cartListTryAgain == true);

                                    if (purchaseBooksActionChoice == 80)
                                    {
                                        if (totalPrice <= 0)
                                        {
                                            cout << endl;
                                            cout << endl;
                                            cout << endl;
                                            cout << endl;
                                            cout << "You can't make payment! No item in your cart now..." << endl;

                                            inputError = true;
                                        }
                                        else
                                        {
                                            int paymentChoice = 0;

                                            do
                                            {
                                                result = receive_Payment(paymentChoice, MAXCART, cart, numberOfOrders, orders, purchaseBooks, loginUserName, purchaseBooksActionChoice, addToCartTryAgain, inputError, isAddMoreBook, cartListTryAgain, MAXBOOK, storeName);

                                            } while (paymentChoice == 82);
                                        }
                                    }
                                    else if (purchaseBooksActionChoice == 67)
                                    {

                                        clear_CartList(cart, MAXCART);

                                        display_ClearCart_Message();

                                        inputError = true;
                                    }
                                }
                                else if (purchaseBooksActionChoice == 67)
                                {
                                    clear_CartList(cart, MAXCART);

                                    display_ClearCart_Message();

                                    inputError = true;
                                }
                                else if (purchaseBooksActionChoice == 65)
                                {
                                    isAddMoreBook = true;
                                }
                            }
                            else if (isBookIdExist == false)
                            {

                                bool isBookIdExistOptionTryAgain = false;

                                do
                                {
                                    isBookIdExistOptionTryAgain = false;

                                    display_isBookIdExistFalse_Option();

                                    int userChoice = getUserChoices();

                                    result = display_isBookIdExistFalse_Result(userChoice, inputError, purchaseBooksActionChoice, isAddMoreBook, isBookIdExistOptionTryAgain);

                                } while (isBookIdExistOptionTryAgain == true);
                            }
                        }
                    }
                    else
                    {
                        display_Purchase_InputError();

                        inputError = true;
                    }
                }

            } while (isAddMoreBook == true);
        }
        else if (purchaseBooksActionChoice == 67)
        {
            clear_CartList(cart, MAXCART);

            display_ClearCart_Message();

            inputError = true;
        }
        else if (purchaseBooksActionChoice == 86)
        {
            float totalQuantity = 0;
            float totalPrice = 0;
            float unitPrice = 0;
            float unitQuantity = 0;
            purchaseBooksActionChoice = 0;

            display_CartList(MAXCART, cart, totalQuantity, unitPrice, unitQuantity, totalPrice);

            do
            {
                cartListTryAgain = false;

                display_CartList_Option();

                int userChoice = getUserChoices();

                result = display_CartList_Result(userChoice, inputError, purchaseBooksActionChoice, addToCartTryAgain, isAddMoreBook, cartListTryAgain);

            } while (cartListTryAgain == true);

            if (purchaseBooksActionChoice == 80)
            {
                if (totalPrice <= 0)
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You can't make payment! No item in your cart now..." << endl;

                    inputError = true;
                }
                else
                {
                    int paymentChoice = 0;

                    do
                    {

                        result = receive_Payment(paymentChoice, MAXCART, cart, numberOfOrders, orders, purchaseBooks, loginUserName, purchaseBooksActionChoice, addToCartTryAgain, inputError, isAddMoreBook, cartListTryAgain, MAXBOOK, storeName);

                    } while (paymentChoice == 82);
                }
            }
            else if (purchaseBooksActionChoice == 67)
            {
                clear_CartList(cart, MAXCART);

                display_ClearCart_Message();

                inputError = true;
            }
        }

    } while (inputError == true);

    return result;
}

void giftOption()
{
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [Y] to confirm to gift book" << endl;
    cout << "Enter [R] to try again" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Please enter your option : ";
}

void searchGiftBooks(string &findBookIsbn)
{
    bool isValidInput = false;
    string input;
    do
    {
        // Prompt the user for input and read it into the "input" variable
        cout << endl;
        cout << endl;
        cout << "---------------------------------------" << endl;
        cout << endl;
        cout << "Enter book ISBN that you are looking for: " << endl;
        cin >> input;

        // Validate input to check if it contains only digits and '-' symbol
        bool containsOnlyDigitsAndHyphen = true;
        for (char c : input)
        {
            if (!isdigit(c) && c != '-')
            {
                containsOnlyDigitsAndHyphen = false;
                break;
            }
        }

        // Check if input is valid and its length is exactly 14 characters
        if (!containsOnlyDigitsAndHyphen || input.length() != 14)
        {
            cout << endl;
            cout << "Invalid input. Please enter a valid book ISBN." << endl;
        }
        else
        {
            isValidInput = true;
        }
    } while (!isValidInput);

    // Store the input in findBookIsbn
    findBookIsbn = input;
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayGiftBook(Book books[], const int MAXBOOK, string &findBookIsbn, int &numRelevantBooks)
{
    int string1Length = findBookIsbn.length(); // To check the length of the books ISBN specified

    for (int j = 0; j < MAXBOOK; j++) // loop through all the books in the file and search for the result match
    {
        if (books[j].bookId == findBookIsbn)
        {
            float tempBookPrice = stof(books[j].bookPrice);
            float tempRating = stof(books[j].bookRating);
            float tempPeopleRated = stof(books[j].numPeopleRating);

            ++numRelevantBooks;

            // display the book information based on the book ISBN input by user.
            cout << endl;
            cout << "------------------------------" << endl;
            cout << "Book ESBN: " << books[j].bookId << endl;
            cout << "Book Title: " << books[j].bookTitle << endl;
            cout << "Author: " << books[j].bookAuthor << endl;
            cout << "Category: " << books[j].bookCategory << endl;
            cout << "Publisher: " << books[j].bookPublisher << endl;
            cout << "Edition: " << books[j].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "------------------------------" << endl;
            cout << endl;

            break;
        }
    }

    cout << endl;
    cout << "Is this the book you're looking for?" << endl;
    cout << endl;
}

void storeGiftFile(Book books[], int MAXBOOK, string findBookIsbn, string loginUserName)
{
    string giftName, giftAddress, giftMessage;

    // to get user to input the information of receiver.
    cout << endl;
    cout << "Enter the person name you want to gift : ";
    getline(cin, giftName);
    cout << "Enter the address of the person you want to deliver the gift : ";
    getline(cin, giftAddress);
    cout << "Leave a message for the person you are gifting : ";
    getline(cin, giftMessage);

    // used to store the data into the giftBook.csv file
    ofstream file("giftBook.csv", ios::out | ios::app);
    int result = 0;
    if (file.is_open())
    {
        time_t now = time(0);                   // Get the current time as a time_t value and store it in the variable now.
        struct tm *localTime = localtime(&now); // Convert the time_t value to a struct tm value representing the current local time  and store it in the variable localTime.

        // Loop through the books array and write each book's ISBN, title, date borrowed, and member name to the file
        for (int j = 0; j < MAXBOOK; j++)
        {
            if (books[j].bookId == findBookIsbn)
            {
                int year = localTime->tm_year + 1900;
                int month = localTime->tm_mon + 1;
                int day = localTime->tm_mday;
                file << books[j].bookId << "," << books[j].bookTitle << ","
                     << year << "," << month << "," << day << ","
                     << loginUserName << "," << giftName << "," << giftAddress << "," << giftMessage << "," << books[j].bookPrice << endl;
                result = 1;
                break;
            }
        }
        // Close the file
        file.close();
    }
    else
    {
        cout << "Error opening file giftBook.csv for writing!" << endl;
    }
}

int giftingResult(int userChoice, bool &loginSuccess, int &giftingChoice, bool &inputError, Book books[], int MAXBOOK, string findBookIsbn, string loginUserName)
{

    if (userChoice == 89)
    {
        storeGiftFile(books, MAXBOOK, findBookIsbn, loginUserName);

        cout << endl;
        cout << "Your gift has been successful taken note by us!" << endl;
        cout << endl;
        cout << "Do you want to continue gifting book? [Y/N]" << endl;
        int userChoice = getUserChoices();

        if (userChoice == 89)
        {
            // continue borrow book
            giftingChoice = 82;
        }
        else if (userChoice == 78)
        {
            // No continue
            giftingChoice = 72;
            return giftingChoice;
        }
    }
    else
    {
        switch (userChoice)
        {

        case 66:
            giftingChoice = 66;
            return giftingChoice;
            break;
        case 72:
            giftingChoice = 72;
            return giftingChoice;
            break;
        case 82:
            giftingChoice = 82;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << "You enter wrongly. Please try again...";
            inputError = true;
            break;
        }
    }
    return 0;
}

int giftBookByISBN(Book books[], bool &loginSuccess, const int MAXBOOK, string loginUserName)
{

    bool inputError = false;
    int giftingChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        string findBookIsbn = "";

        searchGiftBooks(findBookIsbn);

        // check unwanted character
        if (!(findBookIsbn.empty()) && findBookIsbn[0] != '\t' && findBookIsbn[0] != ' ')
        {

            displayGiftBook(books, MAXBOOK, findBookIsbn, numRelevantBooks);

            do
            {
                inputError = false;

                giftOption();

                int userChoice = getUserChoices();

                result = giftingResult(userChoice, loginSuccess, giftingChoice, inputError, books, MAXBOOK, findBookIsbn, loginUserName);

            } while (inputError == true);
        }

        else
        {
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || giftingChoice == 82);

    return result;
}

void checkGiftStatus(bool &loginSuccess, bool &checkStatus, bool &backHomePage)
{
    if (loginSuccess == true)
    {
        checkStatus = true;
    }
    else
    {
        cout << endl;
        cout << "Notice: " << endl;
        cout << "In order to make check your overdue status, you should register/login your account first..." << endl;
        cout << "Redirected back to homepage..." << endl;
        backHomePage = true;
    }
}

void getGiftData(Gift gifts[], const int MAXFINE)
{
    // read the data from giftBook.csv file into c++
    ifstream file("giftBook.csv");
    string row;
    int i = 0;
    getline(file, row); // Read and discard the first row

    while (getline(file, row) && i < MAXFINE)
    {
        // read the data information we stored based on the columns
        stringstream ss(row);
        getline(ss, gifts[i].bookISBN, ',');
        getline(ss, gifts[i].bookTITLE, ',');
        getline(ss, gifts[i].year, ',');
        getline(ss, gifts[i].month, ',');
        getline(ss, gifts[i].day, ',');
        getline(ss, gifts[i].fineUserName, ',');
        getline(ss, gifts[i].receiver, ',');
        getline(ss, gifts[i].address, ',');
        getline(ss, gifts[i].message, ',');
        getline(ss, gifts[i].bookPRICE, ',');
        i++;
    }

    file.close();
}

void displayGiftBook(Gift gifts[], const int MAXFINE, string loginUserName)
{

    float deliverFee = 4.90;
    float giftPay;
    float finalTotal = 0; // Initialize finalTotal to 0
    float totalAmount;
    int string1Length = loginUserName.length();
    int bookstore;
    int bookCount = 0;

    // Loop through the gifts array and display its contents
    for (int i = 0; i < MAXFINE; i++)
    {
        if (gifts[i].fineUserName == loginUserName)
        {

            cout << endl;
            cout << "ISBN: " << gifts[i].bookISBN << endl;
            cout << "Title: " << gifts[i].bookTITLE << endl;
            cout << "Date: " << gifts[i].day << "/" << gifts[i].month << "/" << gifts[i].year << endl;
            cout << "Name of person receiving it : " << gifts[i].receiver << endl;
            cout << "Address delivered to : " << gifts[i].address << endl;
            cout << "Message for receiver : " << gifts[i].message << endl;
            cout << "Deliver fee : RM 4.90 " << endl;
            cout << "Price  : RM " << gifts[i].bookPRICE << endl;

            // Used to convert the gifts[i].bookPRICE into float and store it in another variable
            float total = stof(gifts[i].bookPRICE);

            totalAmount = total + deliverFee;
            cout << "The total is : RM " << fixed << setprecision(2) << totalAmount << endl;

            finalTotal += totalAmount;

            bookCount++;
        }
    }

    if (bookCount == 0)
    {                   // If there are no books to display
        finalTotal = 0; // Set finalTotal to 0
    }

    cout << endl;
    cout << endl;
    cout << "The number of book you choose to gift is : " << bookCount << endl;
    cout << "The grand total is : RM " << fixed << setprecision(2) << finalTotal << endl;
}

int giftResult(int userChoice, int &giftChoice, bool &inputError, int cardNum, int otpNum)
{
    if (userChoice == 89)
    {
        makePaymentGift(cardNum, otpNum);

        cout << endl;
        cout << "Payment done." << endl;
        cout << "Thank You. Enjoy your Day!!" << endl;
        cout << endl;
        giftChoice = 72;
        return giftChoice; // Jump back to home hemnu after done payment.

        int userChoice = getUserChoices();

        if (userChoice == 89)
        {
            // continue borrow book
            giftChoice = 82;
        }
    }

    else
    {
        switch (userChoice)
        {
        case 66:
            giftChoice = 66;
            return giftChoice;
            break;
        case 72:
            giftChoice = 72;
            return giftChoice;
            break;
        case 88:
            cout << "You exit the program...";
            exit(1);
            break;
        default:
            cout << "You enter wrongly. Please try again...";
            inputError = true;
            break;
        }
    }
    return 0;
}

void makePaymentGift(int &cardNum, int &otpNum)
{
    cout << endl;
    cout << "Please enter your card number (8 digits): ";
    cin >> cardNum;

    // Check if the card number is exactly 8 digits long
    while (cin.fail() || cin.peek() != '\n' || to_string(cardNum).length() != 8)
    {
        cout << "Invalid input. Please enter an 8-digit card number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> cardNum;
    }

    cout << endl;
    cout << "Enter OTP number (6 digits): ";
    cin >> otpNum;

    // Check if the OTP is exactly 6 digits long
    while (cin.fail() || cin.peek() != '\n' || to_string(otpNum).length() != 6)
    {
        cout << "Invalid input. Please enter a 6-digit OTP number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> otpNum;
    }
}

void giftHeader()
{
    {
        cout << endl;
        cout << "---------------------------------------" << endl;
        cout << "Enter [Y] to back to make payment" << endl;
        cout << "Enter [B] to back to previous page" << endl;
        cout << "Enter [H] to back to homepage" << endl;
        cout << "Enter [X] to exit the program" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Please enter your option : ";
    }
}

int giftFinalDisplay(Gift gifts[], const int MAXFINE, string loginUserName)
{
    int result = 0;
    bool inputError = false;
    int giftChoice = 0;
    int cardNum, otpNum;

    // Call displayGiftBook function without requiring user input

    displayGiftBook(gifts, MAXFINE, loginUserName);

    do
    {
        inputError = false;
        giftHeader();

        int userChoice = getUserChoices();
        result = giftResult(userChoice, giftChoice, inputError, cardNum, otpNum);

    } while (inputError == true);

    return result;
}

int bookStoreMenuResult(int &userChoice, int &storeChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        storeChoice = 1;
        return storeChoice;
        break;
    case 50:
        storeChoice = 2;
        return storeChoice;
        break;
    case 51:
        storeChoice = 3;
        return storeChoice;
        break;
    case 52:
        storeChoice = 4;
        return storeChoice;
        break;
    case 53:
        storeChoice = 5;
        return storeChoice;
        break;
    case 54:
        storeChoice = 6;
        return storeChoice;
        break;
    case 55:
        storeChoice = 7;
        return storeChoice;
        break;
    case 56:
        storeChoice = 8;
        return storeChoice;
        break;
    case 57:
        storeChoice = 9;
        return storeChoice;
        break;
    case 66:
        storeChoice = 66;
        return storeChoice;
        break;
    case 72:
        storeChoice = 72;
        return storeChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

void bookStoreMenuHeader(string storeName)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "              " << storeName << "           " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select your action: " << endl;
    cout << endl;
    cout << "1. Browse through all the books" << endl;
    cout << "2. Search for books by title" << endl;
    cout << "3. Search for books by author" << endl;
    cout << "4. Search for books by category" << endl;
    cout << "5. Search for books by publisher" << endl;
    cout << "6. Search for books by price" << endl;
    cout << "7. Search for books by rating" << endl;
    cout << "8. Purchase books" << endl;
    cout << "9. Give book ratings" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-9] to next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your option: ";
}

int bookStoreMenu(int storesChoice, bool &loginSuccess)
{

    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int storeChoice = 0;
        string storeName = "";

        storeName = checkStoreName(storesChoice);

        bookStoreMenuHeader(storeName);

        int userChoice = getUserChoices();

        result = bookStoreMenuResult(userChoice, storeChoice, inputError);

    } while (inputError == true);

    return result;
}

int storeSelectionMenuResult(int &userChoice, int &storesChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        storesChoice = 1;
        return storesChoice;
        break;
    case 50:
        storesChoice = 2;
        return storesChoice;
        break;
    case 51:
        storesChoice = 3;
        return storesChoice;
        break;
    case 66:
        storesChoice = 66;
        return storesChoice;
        break;
    case 72:
        storesChoice = 72;
        return storesChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }
    return 0;
}

void storeSelectionMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "       SEARCH BY INDIVIDUAL STORE       " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select one of the bookstores below: " << endl;
    cout << endl;
    cout << "1. Bookstore A" << endl;
    cout << "2. Bookstore B" << endl;
    cout << "3. Bookstore c" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-3] to next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your option: ";
}

int storeSelectionMenu()
{
    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int storesChoice = 0;

        storeSelectionMenuHeader();

        int userChoice = getUserChoices();

        result = storeSelectionMenuResult(userChoice, storesChoice, inputError);

    } while (inputError == true);

    return result;
}

int oneStopFeatureMenuResult(int &userChoice, int &featureChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        featureChoice = 1;
        return featureChoice;
        break;
    case 50:
        featureChoice = 2;
        return featureChoice;
        break;
    case 51:
        featureChoice = 3;
        return featureChoice;
        break;
    case 66:
        featureChoice = 66;
        return featureChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }
    return 0;
}

void oneStopFeatureMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "===================================" << endl;
    cout << "           FEATURE MENU         " << endl;
    cout << "===================================" << endl;
    cout << endl;
    cout << "Select one of the feature below: " << endl;
    cout << endl;
    cout << "1. Search by individual store" << endl;
    cout << "2. Search by multiple store" << endl;
    cout << "3. Gift a Friend" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-3] to next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "===================================" << endl;
    cout << "Please enter your option: ";
}

int oneStopFeatureMenu()
{

    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int featureChoice = 0;

        oneStopFeatureMenuHeader();

        int userChoice = getUserChoices();

        result = oneStopFeatureMenuResult(userChoice, featureChoice, inputError);

    } while (inputError == true);

    return result;
}

int additionalFeatureResult(int &userChoice, int &additionalChoice, bool &inputError)
{

    switch (userChoice)
    {
    case 49:
        additionalChoice = 1;
        return additionalChoice;
        break;
    case 50:
        additionalChoice = 2;
        return additionalChoice;
        break;
    case 66:
        additionalChoice = 66;
        return additionalChoice;
        break;
    case 72:
        additionalChoice = 72;
        return additionalChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << "You enter wrongly. Please try again...";
        inputError = true;
        break;
    }

    return 0;
}

void displayAdditionalFeature()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "----------------------------------------" << endl;
    cout << "             Gifting Menu       " << endl;
    cout << "----------------------------------------" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select one of the feature below : " << endl;
    cout << endl;
    cout << "1. Pick a gift" << endl;
    cout << "2. Check gifting cart" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-2] to next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Please enter your option : ";
}

int additionalFeature()
{

    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int additionalChoice = 0;

        displayAdditionalFeature();

        int userChoice = getUserChoices();

        result = additionalFeatureResult(userChoice, additionalChoice, inputError);

    } while (inputError == true);

    return result;
}

int homeMenuResult(int &userChoice, int &homeMenuChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        homeMenuChoice = 1;
        return homeMenuChoice;
        break;
    case 50:
        homeMenuChoice = 2;
        return homeMenuChoice;
        break;
    case 88:
        cout << "Your exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

void homeMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "               WELCOME TO               " << endl;
    cout << "         ABC ONE STOP BOOK STORE        " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select options below to proceed: " << endl;
    cout << endl;
    cout << "1. Register / Login into your account" << endl;
    cout << "2. Continue as guest" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-2] to next page" << endl;
    cout << "Enter [X] to exit program" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your option: ";
}

int homeMenu()
{
    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int homeMenuChoice = 0;

        homeMenuHeader();

        int userChoice = getUserChoices();

        result = homeMenuResult(userChoice, homeMenuChoice, inputError);

    } while (inputError == true);

    return result;
}

void searchTitle_Author_Category_Publisher_Price_RatingOption_MUL()
{
    cout << "---------------------------------------------------------" << endl;
    cout << "Enter [R] to try again" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=========================================================" << endl;
    cout << "Please enter your option: ";
}

void MulstoreSelectionMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "       SEARCH BY MULTIPLE STORE       " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select your action: " << endl;
    cout << endl;
    cout << "1. Search for books by title / Compare book prices amongst the 3 books stores" << endl;
    cout << "2. Search for books by author" << endl;
    cout << "3. Search for books by category" << endl;
    cout << "4. Search for books by publisher" << endl;
    cout << "5. Search for books by price" << endl;
    cout << "6. Search for books by rating" << endl;
    cout << "7. Suggest a book(s) for book stores to add into inventory" << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Notice: " << endl;
    cout << "1. \"Search by multiple store\" option is used for filtering & comparison purpose." << endl;
    cout << "2. Please proceed to \"Search by individual store\" to perform purchase action." << endl;
    cout << "3. Remember to record down book ISBN to perform purchase action." << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter [1-7] to next page" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "========================================" << endl;
    cout << "Please enter your option: ";
}

int MulstoreSelectionMenu()
{
    bool inputError = false;
    int result = 0;

    do
    {
        inputError = false;

        int storesChoice = 0;

        MulstoreSelectionMenuHeader();

        int userChoice = getUserChoices();

        result = bookmulStoreMenuResult(userChoice, storesChoice, inputError);

    } while (inputError == true);

    return result;
}

int bookmulStoreMenuResult(int &userChoice, int &storeChoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        storeChoice = 1;
        return storeChoice;
        break;
    case 50:
        storeChoice = 2;
        return storeChoice;
        break;
    case 51:
        storeChoice = 3;
        return storeChoice;
        break;
    case 52:
        storeChoice = 4;
        return storeChoice;
        break;
    case 53:
        storeChoice = 5;
        return storeChoice;
        break;
    case 54:
        storeChoice = 6;
        return storeChoice;
        break;
    case 55:
        storeChoice = 7;
        return storeChoice;
        break;
    case 66:
        storeChoice = 66;
        return storeChoice;
        break;
    case 72:
        storeChoice = 72;
        return storeChoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

int searchForMulTitle(bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int searchBookTitleChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookTitleChoice = 0;
        string searchformultitle = "";

        getUsersearchForMulTitle(searchformultitle);

        if (searchformultitle == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        // check unwanted character
        if (!(searchformultitle.empty()) && searchformultitle[0] != '\t' && searchformultitle[0] != ' ')
        {

            stringToUpperCase(searchformultitle);

            searchAndBookListHeader();

            displaysearchForMulTitle(MAXBOOK, searchformultitle, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                int userChoice = getUserChoices();

                if (userChoice != 80)
                {
                    result = searchBookByTitleResult(userChoice, loginSuccess, searchBookTitleChoice, inputError);
                }
                else
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You enter wrongly. Please try again..." << endl;
                    inputError = true;
                }

            } while (inputError == true);
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || searchBookTitleChoice == 82);

    return result;
}

void getUsersearchForMulTitle(string &searchformultitle)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Input is case insensitive" << endl;
    cout << "3. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter book title that you are looking for: " << endl;
    getline(cin, searchformultitle);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void getMulBookData_BookStoreA(Book books_BookStoreA[], const int MAXBOOK)
{
    string storeFile;

    storeFile = "BookstoreA.csv";

    ifstream Bookstore;
    Bookstore.open(storeFile);
    string firstRow;

    if (Bookstore)
    {
        while (!(Bookstore.eof()))
        {
            getline(Bookstore, firstRow);

            // store books values into books_BookStoreA array
            for (int i = 0; i < MAXBOOK; i++)
            {

                getline(Bookstore, books_BookStoreA[i].bookId, ',');
                getline(Bookstore, books_BookStoreA[i].bookTitle, ',');
                getline(Bookstore, books_BookStoreA[i].bookAuthor, ',');
                getline(Bookstore, books_BookStoreA[i].bookCategory, ',');
                getline(Bookstore, books_BookStoreA[i].bookPublisher, ',');
                getline(Bookstore, books_BookStoreA[i].bookEdition, ',');
                getline(Bookstore, books_BookStoreA[i].bookPrice, ',');
                getline(Bookstore, books_BookStoreA[i].bookRating, ',');
                getline(Bookstore, books_BookStoreA[i].numPeopleRating);
            }
        }
    }
    Bookstore.close();
}

void getMulBookData_BookStoreB(Book books_BookStoreB[], const int MAXBOOK)
{
    string storeFile;

    storeFile = "BookstoreB.csv";

    ifstream Bookstore;
    Bookstore.open(storeFile);
    string firstRow;

    if (Bookstore)
    {
        while (!(Bookstore.eof()))
        {
            getline(Bookstore, firstRow);

            // store books values into books_BookStoreB array
            for (int i = 0; i < MAXBOOK; i++)
            {
                getline(Bookstore, books_BookStoreB[i].bookId, ',');
                getline(Bookstore, books_BookStoreB[i].bookTitle, ',');
                getline(Bookstore, books_BookStoreB[i].bookAuthor, ',');
                getline(Bookstore, books_BookStoreB[i].bookCategory, ',');
                getline(Bookstore, books_BookStoreB[i].bookPublisher, ',');
                getline(Bookstore, books_BookStoreB[i].bookEdition, ',');
                getline(Bookstore, books_BookStoreB[i].bookPrice, ',');
                getline(Bookstore, books_BookStoreB[i].bookRating, ',');
                getline(Bookstore, books_BookStoreB[i].numPeopleRating);
            }
        }
    }
    Bookstore.close();
}

void getMulBookData_BookStoreC(Book books_BookStoreC[], const int MAXBOOK)
{
    string storeFile;

    storeFile = "BookstoreC.csv";

    ifstream Bookstore;
    Bookstore.open(storeFile);
    string firstRow;

    if (Bookstore)
    {
        while (!(Bookstore.eof()))
        {
            getline(Bookstore, firstRow);

            // store books values into books_BookStoreC array
            for (int i = 0; i < MAXBOOK; i++)
            {
                getline(Bookstore, books_BookStoreC[i].bookId, ',');
                getline(Bookstore, books_BookStoreC[i].bookTitle, ',');
                getline(Bookstore, books_BookStoreC[i].bookAuthor, ',');
                getline(Bookstore, books_BookStoreC[i].bookCategory, ',');
                getline(Bookstore, books_BookStoreC[i].bookPublisher, ',');
                getline(Bookstore, books_BookStoreC[i].bookEdition, ',');
                getline(Bookstore, books_BookStoreC[i].bookPrice, ',');
                getline(Bookstore, books_BookStoreC[i].bookRating, ',');
                getline(Bookstore, books_BookStoreC[i].numPeopleRating);
            }
        }
    }
    Bookstore.close();
}

void displaysearchForMulTitle(const int MAXBOOK, string searchformultitle, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    int string1Length = searchformultitle.length();

    // display books information when userinput has similar character with bookstore array
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformultitle == books_BookStoreA[j].bookTitle)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Edition: " << books_BookStoreA[j].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreA[j].bookTitle.length();

        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreA[j].bookTitle.substr(i, string1Length) == searchformultitle)
            {
                float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
                float tempRating = stof(books_BookStoreA[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store A            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN:: " << books_BookStoreA[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
                cout << "Edition: " << books_BookStoreA[j].bookEdition << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }

    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformultitle == books_BookStoreB[j].bookTitle)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN:: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Edition: " << books_BookStoreB[j].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreB[j].bookTitle.length();

        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreB[j].bookTitle.substr(i, string1Length) == searchformultitle)
            {
                float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
                float tempRating = stof(books_BookStoreB[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store B            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN:: " << books_BookStoreB[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
                cout << "Edition: " << books_BookStoreB[j].bookEdition << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }

    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformultitle == books_BookStoreC[j].bookTitle)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN:: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Edition: " << books_BookStoreC[j].bookEdition << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreC[j].bookTitle.length();

        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreC[j].bookTitle.substr(i, string1Length) == searchformultitle)
            {
                float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
                float tempRating = stof(books_BookStoreC[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store C            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN:: " << books_BookStoreC[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
                cout << "Edition: " << books_BookStoreC[j].bookEdition << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }
    cout << "Total " << numRelevantBooks << " relevant books found in our system" << endl;
    cout << endl;
}

int searchForMulAuthor(bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int searchBookAuthorChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookAuthorChoice = 0;
        string searchformultauthor = "";

        getUsersearchForMulAuthor(searchformultauthor);

        if (searchformultauthor == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        // check unwanted character
        if (!(searchformultauthor.empty()) && searchformultauthor[0] != '\t' && searchformultauthor[0] != ' ')
        {
            stringToUpperCase(searchformultauthor);

            searchAndBookListByAuthorHeader();

            displaysearchForMulAuthor(MAXBOOK, searchformultauthor, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                int userChoice = getUserChoices();

                if (userChoice != 80)
                {
                    result = searchBookByAuthorResult(userChoice, loginSuccess, searchBookAuthorChoice, inputError);
                }
                else
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You enter wrongly. Please try again..." << endl;
                    inputError = true;
                }
            } while (inputError == true);
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || searchBookAuthorChoice == 82);

    return result;
}

void getUsersearchForMulAuthor(string &searchformultauthor)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Input is case insensitive" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter author that you are looking for: " << endl;
    getline(cin, searchformultauthor);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displaysearchForMulAuthor(const int MAXBOOK, string searchformultauthor, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    int string1Length = searchformultauthor.length();

    // display books information when userinput has similar character with bookstore array
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformultauthor == books_BookStoreA[j].bookAuthor)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreA[j].bookAuthor.length();
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreA[j].bookAuthor.substr(i, string1Length) == searchformultauthor)
            {
                float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
                float tempRating = stof(books_BookStoreA[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store A            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformultauthor == books_BookStoreB[j].bookAuthor)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreB[j].bookAuthor.length();
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreB[j].bookAuthor.substr(i, string1Length) == searchformultauthor)
            {
                float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
                float tempRating = stof(books_BookStoreB[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store B            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformultauthor == books_BookStoreC[j].bookAuthor)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreC[j].bookAuthor.length();
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreC[j].bookAuthor.substr(i, string1Length) == searchformultauthor)
            {
                float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
                float tempRating = stof(books_BookStoreC[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store C            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }

    cout << "Total " << numRelevantBooks << " books from author that have \"" << searchformultauthor << "\" in their name are found in our system" << endl;
    cout << endl;
}

void searchAndBookListByAuthorHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "We are start searching..." << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "=========================================================" << endl;
    cout << "Here are all the books for this Author: " << endl;
    cout << "=========================================================" << endl;
    cout << endl;
}

int searchForMulCategory(bool &loginSuccess, const int MAXBOOK)
{
    bool inputError = false;
    int searchBookCatergoryChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookCatergoryChoice = 0;
        string searchBookCatergory = "";
        bool searchCategoryProceed = false;

        searchBookByCategoryHeader();

        int userChoice = getUserChoices();

        result = searchBookByCategoryResult1(userChoice, searchBookCatergoryChoice, searchCategoryProceed, loginSuccess, searchBookCatergory, inputError);

        if (searchCategoryProceed == true)
        {

            displaysearchForMulCategory(searchBookCatergoryChoice, MAXBOOK, searchBookCatergory, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                int userChoice = getUserChoices();

                if (userChoice != 80)
                {
                    result = searchBookByCategoryResult2(userChoice, searchBookCatergoryChoice, loginSuccess, inputError);
                }
                else
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You enter wrongly. Please try again..." << endl;
                    inputError = true;
                }
            } while (inputError == true);
        }
    } while (inputError == true || searchBookCatergoryChoice == 82);

    return result;
}

void displaysearchForMulCategory(int &searchBookCatergoryChoice, const int MAXBOOK, string &searchBookCatergory, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    // display books information when userinput has similar category with bookstore array
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchBookCatergory == books_BookStoreA[j].bookCategory)
        {

            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }

    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchBookCatergory == books_BookStoreB[j].bookCategory)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }

    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchBookCatergory == books_BookStoreC[j].bookCategory)
        {
            {
                float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
                float tempRating = stof(books_BookStoreC[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store C            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;
            }
        }
    }

    cout << "Total " << numRelevantBooks << " books from \"" << searchBookCatergory << "\" category are found in our system" << endl;
    cout << endl;
}

int searchForMulPublisher(bool &loginSuccess, const int MAXBOOK)
{

    bool inputError = false;
    int searchBookPublisherChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        int numRelevantBooks = 0;
        searchBookPublisherChoice = 0;
        string searchformulPublisher = "";

        getUsersearchForMulPublisher(searchformulPublisher);

        if (searchformulPublisher == "-999")
        {
            int backHomePage = 72;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You had entered \"-999\". Now redirected back to homepage...";
            cout << endl;

            return backHomePage;
        }

        // check unwanted character
        if (!(searchformulPublisher.empty()) && searchformulPublisher[0] != '\t' && searchformulPublisher[0] != ' ')
        {
            stringToUpperCase(searchformulPublisher);

            searchAndBookListHeader();

            displaysearchForMulPublisher(MAXBOOK, searchformulPublisher, numRelevantBooks);

            do
            {
                inputError = false;

                searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                int userChoice = getUserChoices();

                if (userChoice != 80)
                {
                    result = searchBookByPublisherResult(userChoice, loginSuccess, searchBookPublisherChoice, inputError);
                }
                else
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You enter wrongly. Please try again..." << endl;
                    inputError = true;
                }
            } while (inputError == true);
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "You enter wrongly. Please try again..." << endl;
            inputError = true;
        }
    } while (inputError == true || searchBookPublisherChoice == 82);

    return result;
}

void getUsersearchForMulPublisher(string &searchformulPublisher)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Input is case insensitive" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter publisher that you are looking for: " << endl;
    getline(cin, searchformulPublisher);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displaysearchForMulPublisher(const int MAXBOOK, string searchformulPublisher, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    int string1Length = searchformulPublisher.length();

    // display books information when userinput has similar character with bookstore array
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformulPublisher == books_BookStoreA[j].bookPublisher)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreA[j].bookPublisher.length();
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreA[j].bookPublisher.substr(i, string1Length) == searchformulPublisher)
            {
                float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
                float tempRating = stof(books_BookStoreA[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store A            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformulPublisher == books_BookStoreB[j].bookPublisher)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreB[j].bookPublisher.length();
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreB[j].bookPublisher.substr(i, string1Length) == searchformulPublisher)
            {
                float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
                float tempRating = stof(books_BookStoreB[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store B            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        if (searchformulPublisher == books_BookStoreC[j].bookPublisher)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;

            break;
        }
        int string2Length = books_BookStoreC[j].bookPublisher.length();
        for (int i = 0; i <= (string2Length - string1Length); i++)
        {
            if (books_BookStoreC[j].bookPublisher.substr(i, string1Length) == searchformulPublisher)
            {
                float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
                float tempRating = stof(books_BookStoreC[j].bookRating);
                float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
                ++numRelevantBooks;
                cout << "========================================" << endl;
                cout << "              Book Store C            " << endl;
                cout << "========================================" << endl;
                cout << endl;
                cout << "---------------------------------------" << endl;
                cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
                cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
                cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
                cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
                cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
                cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
                cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
                cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
                cout << "---------------------------------------" << endl;
                cout << endl;

                break;
            }
        }
    }
    cout << "Total " << numRelevantBooks << " books from publisher that have \"" << searchformulPublisher << "\" in their name are found in our system" << endl;
    cout << endl;
}

int searchForMulPrice(bool &loginSuccess, const int MAXBOOK)
{
    bool inputError = false;
    int searchBookPriceChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        searchBookPriceChoice = 0;
        int numRelevantBooks = 0;
        string searchformulPrice = "";
        bool searchPriceProceed = false;

        searchBookByPriceHeader();

        int userChoice = getUserChoices();

        result = searchBookByPriceResult1(userChoice, searchBookPriceChoice, inputError, searchPriceProceed);

        if (searchPriceProceed == true)
        {
            do
            {
                inputError = false;

                getUsersearchForMulPrice(searchformulPrice);

                if (searchformulPrice == "-999")
                {
                    int backHomePage = 72;

                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You had entered \"-999\". Now redirected back to homepage...";
                    cout << endl;

                    return backHomePage;
                }

                const string specialChars = "~`!@#$%^&*()_+-=|\\}]{['\":;/?>,<] \t^";
                const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

                // check if user input is invalid
                if (searchformulPrice.find_first_of(specialChars) != string::npos || searchformulPrice.find_first_of(alphabets) != string::npos || searchformulPrice[0] == '.' || searchformulPrice.empty())
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Something wrong with your input. Please try again..." << endl;

                    inputError = true;
                }
                else
                {
                    float tempFloatSearchBookPrice = stof(searchformulPrice);

                    if (tempFloatSearchBookPrice >= 0)
                    {
                        float numBookPrice;
                        stringstream ss(searchformulPrice);

                        ss >> numBookPrice;

                        /*
                        Check condition
                        ss.fail() == check if ss string able convert into float
                        !ss.eof() == check whether got missout string in ss eg. float "1.2gs5"
                        (searchBookPrice.empty()) == check if submmision is empty
                        (searchBookPrice[0] == '\t') == check if no unwanted whitespace
                        (searchBookPrice[0] == ' ') == check if no unwanted whitespace
                        */
                        if (ss.fail() || !ss.eof() || (searchformulPrice.empty()) || searchformulPrice[0] == '\t' || searchformulPrice[0] == ' ' || searchformulPrice[0] == '.')
                        {
                            ss.clear();
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << "You entered invalid price number. Please try again..." << endl;
                            inputError = true;
                        }
                        else
                        {
                            if (searchBookPriceChoice == 49)
                            {

                                displayHigherThanSearchMulPrice(MAXBOOK, numBookPrice, numRelevantBooks);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                                    int userChoice = getUserChoices();

                                    if (userChoice != 80)
                                    {
                                        result = searchBookByPriceResult2(userChoice, inputError, loginSuccess, searchBookPriceChoice);
                                    }
                                    else
                                    {
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "You enter wrongly. Please try again..." << endl;
                                        inputError = true;
                                    }

                                } while (inputError == true);
                            }
                            else if (searchBookPriceChoice == 50)
                            {

                                displayLowerThanSearchMulPrice(MAXBOOK, numBookPrice, numRelevantBooks);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                                    int userChoice = getUserChoices();

                                    if (userChoice != 80)
                                    {
                                        result = searchBookByPriceResult3(userChoice, inputError, loginSuccess, searchBookPriceChoice);
                                    }
                                    else
                                    {
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "You enter wrongly. Please try again..." << endl;
                                        inputError = true;
                                    }

                                } while (inputError == true);
                            }
                        }
                    }
                    else if (tempFloatSearchBookPrice < 0)
                    {
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Something wrong with your input. Please try again..." << endl;

                        inputError = true;
                    }
                }

            } while (inputError == true);
        }

    } while (inputError == true || searchBookPriceChoice == 82);

    return result;
}

void getUsersearchForMulPrice(string &searchformulPrice)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1. Only accept numbers that higher than or equal to 0" << endl;
    cout << "2. Enter [-999] to quit from entering input & \n   redirected to homepage" << endl;
    cout << "=====================================================" << endl;
    cout << "Please enter your price: ";
    getline(cin, searchformulPrice);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void displayHigherThanSearchMulPrice(const int MAXBOOK, float &numBookPrice, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookPrice = stof(books_BookStoreA[j].bookPrice);

        if (tempBookPrice >= numBookPrice)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookPrice = stof(books_BookStoreB[j].bookPrice);

        if (tempBookPrice >= numBookPrice)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookPrice = stof(books_BookStoreC[j].bookPrice);

        if (tempBookPrice >= numBookPrice)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are higher than / equal to RM " << showpoint << fixed << setprecision(2) << numBookPrice << " are found in our system" << endl;
    cout << endl;
}

void displayLowerThanSearchMulPrice(const int MAXBOOK, float &numBookPrice, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookPrice = stof(books_BookStoreA[j].bookPrice);

        if (tempBookPrice <= numBookPrice)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookPrice = stof(books_BookStoreB[j].bookPrice);

        if (tempBookPrice <= numBookPrice)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookPrice = stof(books_BookStoreC[j].bookPrice);

        if (tempBookPrice <= numBookPrice)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are lower than / equal to RM " << showpoint << fixed << setprecision(2) << numBookPrice << " are found in our system" << endl;
    cout << endl;
}

int searchForMulRating(bool &loginSuccess, const int MAXBOOK)
{
    bool inputError = false;
    int searchBookRatingChoice = 0;
    int result = 0;

    do
    {
        inputError = false;

        searchBookRatingChoice = 0;
        int numRelevantBooks = 0;
        string searchBookRating = "";
        bool searchRatingProceed = false;

        searchBookByRatingHeader();

        int userChoice = getUserChoices();

        result = searchBookByRatingResult1(userChoice, searchBookRatingChoice, inputError, searchRatingProceed);

        if (searchRatingProceed == true)
        {
            do
            {
                inputError = false;

                getUserSearchBookByRating(searchBookRating);

                if (searchBookRating == "-999")
                {
                    int backHomePage = 72;

                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "You had entered \"-999\". Now redirected back to homepage...";
                    cout << endl;

                    return backHomePage;
                }

                const string specialChars = "~`!@#$%^&*()_+-=|\\}]{['\":;/?>,<] \t^";
                const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

                // check if user input is invalid
                if (searchBookRating.find_first_of(specialChars) != string::npos || searchBookRating.find_first_of(alphabets) != string::npos || searchBookRating[0] == '.' || searchBookRating.empty())
                {
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << endl;
                    cout << "Something wrong with your input. Please try again..." << endl;

                    inputError = true;
                }
                else
                {
                    float tempFloatSearchBookRating = stof(searchBookRating);

                    if (tempFloatSearchBookRating >= 0 && 5 >= tempFloatSearchBookRating)
                    {
                        float numBookRating;
                        stringstream ss(searchBookRating);

                        ss >> numBookRating;

                        /*
                        Check condition
                        ss.fail() == check if ss string able convert into float
                        !ss.eof() == check whether got missout string in ss eg. float "1.2gs5"
                        (searchBookRating.empty()) == check if submmision is empty
                        (searchBookRating[0] == '\t') == check if no unwanted whitespace
                        (searchBookRating[0] == ' ') == check if no unwanted whitespace
                        */
                        if (ss.fail() || !ss.eof() || (searchBookRating.empty()) || searchBookRating[0] == '\t' || searchBookRating[0] == ' ' || searchBookRating[0] == '.')
                        {
                            ss.clear();
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            cout << "You entered invalid rating number. Please try again..." << endl;
                            inputError = true;
                        }
                        else
                        {
                            if (searchBookRatingChoice == 49)
                            {

                                displayHigherThanSearchMulRating(MAXBOOK, numBookRating, numRelevantBooks);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                                    int userChoice = getUserChoices();

                                    if (userChoice != 80)
                                    {
                                        result = searchBookByRatingResult2(userChoice, inputError, loginSuccess, searchBookRatingChoice);
                                    }
                                    else
                                    {
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "You enter wrongly. Please try again..." << endl;
                                        inputError = true;
                                    }

                                } while (inputError == true);
                            }
                            else if (searchBookRatingChoice == 50)
                            {

                                displayLowerThanSearchMulRating(MAXBOOK, numBookRating, numRelevantBooks);

                                do
                                {
                                    inputError = false;

                                    searchTitle_Author_Category_Publisher_Price_RatingOption_MUL();

                                    int userChoice = getUserChoices();

                                    if (userChoice != 80)
                                    {
                                        result = searchBookByRatingResult3(userChoice, inputError, loginSuccess, searchBookRatingChoice);
                                    }
                                    else
                                    {
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << endl;
                                        cout << "You enter wrongly. Please try again..." << endl;
                                        inputError = true;
                                    }

                                } while (inputError == true);
                            }
                        }
                    }
                    else
                    {
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Something wrong with your input. Please try again..." << endl;

                        inputError = true;
                    }
                }

            } while (inputError == true);
        }

    } while (inputError == true || searchBookRatingChoice == 82);

    return result;
}

void displayHigherThanSearchMulRating(const int MAXBOOK, float &numBookRating, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookRating = stof(books_BookStoreA[j].bookRating);

        if (tempBookRating >= numBookRating)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookRating = stof(books_BookStoreB[j].bookRating);

        if (tempBookRating >= numBookRating)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookRating = stof(books_BookStoreC[j].bookRating);

        if (tempBookRating >= numBookRating)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are higher than / equal to " << showpoint << fixed << setprecision(2) << numBookRating << " rating are found in our system" << endl;
    cout << endl;
}

void displayLowerThanSearchMulRating(const int MAXBOOK, float &numBookRating, int &numRelevantBooks)
{
    Book books_BookStoreA[MAXBOOK];
    Book books_BookStoreB[MAXBOOK];
    Book books_BookStoreC[MAXBOOK];
    getMulBookData_BookStoreA(books_BookStoreA, MAXBOOK);
    getMulBookData_BookStoreB(books_BookStoreB, MAXBOOK);
    getMulBookData_BookStoreC(books_BookStoreC, MAXBOOK);

    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookRating = stof(books_BookStoreA[j].bookRating);

        if (tempBookRating <= numBookRating)
        {
            float tempBookPrice = stof(books_BookStoreA[j].bookPrice);
            float tempRating = stof(books_BookStoreA[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreA[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store A            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreA[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreA[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreA[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreA[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreA[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookRating = stof(books_BookStoreB[j].bookRating);

        if (tempBookRating <= numBookRating)
        {
            float tempBookPrice = stof(books_BookStoreB[j].bookPrice);
            float tempRating = stof(books_BookStoreB[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreB[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store B            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreB[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreB[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreB[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreB[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreB[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }
    for (int j = 0; j < MAXBOOK; j++)
    {
        float tempBookRating = stof(books_BookStoreC[j].bookRating);

        if (tempBookRating <= numBookRating)
        {
            float tempBookPrice = stof(books_BookStoreC[j].bookPrice);
            float tempRating = stof(books_BookStoreC[j].bookRating);
            float tempPeopleRated = stof(books_BookStoreC[j].numPeopleRating);
            ++numRelevantBooks;
            cout << "========================================" << endl;
            cout << "              Book Store C            " << endl;
            cout << "========================================" << endl;
            cout << endl;
            cout << "---------------------------------------" << endl;
            cout << "Book ISBN: " << books_BookStoreC[j].bookId << endl;
            cout << "Book Title: " << books_BookStoreC[j].bookTitle << endl;
            cout << "Author: " << books_BookStoreC[j].bookAuthor << endl;
            cout << "Category: " << books_BookStoreC[j].bookCategory << endl;
            cout << "Publisher: " << books_BookStoreC[j].bookPublisher << endl;
            cout << "Price: RM " << showpoint << fixed << setprecision(2) << tempBookPrice << endl;
            cout << "Rating: " << showpoint << fixed << setprecision(2) << tempRating << endl;
            cout << "Number of people rating: " << fixed << setprecision(0) << noshowpoint << tempPeopleRated << endl;
            cout << "---------------------------------------" << endl;
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Total " << numRelevantBooks << " books are lower than / equal to " << showpoint << fixed << setprecision(2) << numBookRating << " rating are found in our system" << endl;
    cout << endl;
}

int diplaysuggestbook()
{
    const int MAXSUGGEST = 30;
    bool inputError = false;
    int result = 0;
    do
    {
        string ISBN;
        int numofISBN;
        inputError = false;
        int suggestchoice = 0;

        MulsuggestbookMenuHeader();

        int userChoice = getUserChoices();

        result = suggestBookResult(userChoice, suggestchoice, inputError);

        if (suggestchoice == 1)
        {
            do
            {
                getsuggestbookdata(ISBN, numofISBN);

                do
                {
                    inputError = false;

                    Mulsuggestbookhistorymenu();
                    int userChoice = getUserChoices();
                    result = bookmulsuggestResult(userChoice, suggestchoice, inputError);
                } while (inputError == true);
            } while (suggestchoice == 65);
        }
        else if (suggestchoice == 2)
        {
            do
            {
                displaysuggestALLBOOK(MAXSUGGEST);

                do
                {
                    inputError = false;

                    Mulsuggestbookhistorymenu();
                    int userChoice = getUserChoices();
                    result = bookmulsuggestResult(userChoice, suggestchoice, inputError);
                } while (inputError == true);
            } while (suggestchoice == 65);
        }
    } while (inputError == true);

    return result;
}

void getsuggestbookdata(string &ISBN, int &numofISBN)
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Please send us book ISBN for book stores to purchase to add to their inventory" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Notice:" << endl;
    cout << "1.Enter according to ISBN-13 format. Example \"978-0593422410\"" << endl;
    cout << "2.Remember to include \"-\" character in input" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Enter the book ISBN: ";
    getline(cin, ISBN);
    cout << "Press enter again to proceed...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    const string alphabets = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

    // check if user input is invalid
    if (ISBN.length() != 14 || ISBN[3] != '-' || ISBN.find_first_of(alphabets) != string::npos)
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Invalid ISBN input! Please try again." << endl;
        return; // added to exit function if input is invalid
    }

    // insert new suggestion into csv file
    ofstream my_file("suggestbook.csv", ios::app);

    if (my_file)
    {
        my_file << ISBN << "\n";
        my_file.close();
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "We have received your suggestion...Thank you so much!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

int suggestBookResult(int &userChoice, int &suggestchoice, bool &inputError)
{
    switch (userChoice)
    {
    case 49:
        suggestchoice = 1;
        return suggestchoice;
        break;
    case 50:
        suggestchoice = 2;
        return suggestchoice;
        break;
    case 66:
        suggestchoice = 66;
        return suggestchoice;
        break;
    case 72:
        suggestchoice = 72;
        return suggestchoice;
        break;
    case 88:
        cout << "Your exit the program...";
        exit(1);
        break;
    default:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

void MulsuggestbookMenuHeader()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "              SUGGEST BOOK              " << endl;
    cout << "                  MENU                  " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Select your action: " << endl;
    cout << endl;
    cout << "1. Suggest a book(s) for all book stores to add to their inventory" << endl;
    cout << "2. View Suggested Book History (From all users)" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Enter [1-2] to proceed next action" << endl;
    cout << "Enter [B] to back to previous page" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "===============================================" << endl;
    cout << "Please enter your option: ";
}

int getMulsuggestBookData(Book books_suggestbook[], const int MAXSUGGEST)
{
    ifstream suggeststore;
    suggeststore.open("suggestbook.csv");
    string firstRow;

    int count = 0;

    // store suggestion value into books_suggestbook array
    if (suggeststore)
    {
        getline(suggeststore, firstRow);
        while (count < MAXSUGGEST && getline(suggeststore, books_suggestbook[count].ISBN))
        {
            count++;
        }
    }
    suggeststore.close();
    return count;
}

void displaysuggestALLBOOK(const int MAXSUGGEST)
{
    Book books_suggestbook[MAXSUGGEST];
    int datacount = getMulsuggestBookData(books_suggestbook, MAXSUGGEST);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "        HISTORY OF SUGGESTED BOOK       " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Up to first 30 history record will be display below: " << endl;
    cout << endl;

    // display all suggestions history
    for (int j = 0; j < datacount; j++)
    {
        cout << endl;
        cout << "---------------------------------------" << endl;
        cout << "Book ISBN: " << books_suggestbook[j].ISBN << endl;
        cout << "---------------------------------------" << endl;
    }

    cout << endl;
}

int bookmulsuggestResult(int &userChoice, int &suggestchoice, bool &inputError)
{
    switch (userChoice)
    {
    case 65:
        suggestchoice = 65;
        return suggestchoice;
        break;
    case 66:
        suggestchoice = 66;
        return suggestchoice;
        break;
    case 72:
        suggestchoice = 72;
        return suggestchoice;
        break;
    case 88:
        cout << "You exit the program...";
        exit(1);
        break;
    default:
        suggestchoice = 0;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "You enter wrongly. Please try again..." << endl;
        inputError = true;
        break;
    }

    return 0;
}

void Mulsuggestbookhistorymenu()
{
    cout << "---------------------------------------------------------" << endl;
    cout << "Enter [A] to perform action again" << endl;
    cout << "Enter [B] to back" << endl;
    cout << "Enter [H] to back to homepage" << endl;
    cout << "Enter [X] to exit the program" << endl;
    cout << "=========================================================" << endl;
    cout << "Please enter your option: ";
}
