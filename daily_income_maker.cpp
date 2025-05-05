#include <iostream>
#include <string>
#include <cstdlib> // Include for system()

using namespace std;

// Function to open a URL in the default browser
void openBrowser(const string& url) {
    string command = "start " + url; // For Windows
    system(command.c_str());
}

int main() {
    // Greeting message
    cout << "Welcome to The Daily Income Maker!" << endl;
    cout << "This program helps you invest online profitably so you can earn income every day." << endl;

    // First question
    string investResponse;
    cout << "1. Would you like to have a program that helps you invest online profitably? (yes/no): ";
    cin >> investResponse;

    // Check response to the first question
    if (investResponse == "yes") {
        cout << "Great! Let's get started with your investment journey." << endl;
    } else {
        cout << "No problem! Feel free to explore other options." << endl;
        return 0; // Exit the program if the user doesn't want to invest
    }

    // Second question
    string stockResponse;
    cout << "2. Would you like to pick your favorite stock or investment vehicle (like cryptocurrency) and analyze the charts? (yes/no): ";
    cin >> stockResponse;

    // Check response to the second question
    if (stockResponse == "yes") {
        cout << "Awesome! You can analyze charts to find the ideal time to invest for profit." << endl;

        // Ask if the user has API keys
        string apiResponse;
        cout << "Do you have the API keys for your trading platform? (yes/no): ";
        cin >> apiResponse;

        if (apiResponse == "yes") {
            // Ask if the user is logged into their account
            string loginResponse;
            cout << "Are you logged into your trading account? (yes/no): ";
            cin >> loginResponse;

            if (loginResponse == "yes") {
                // Ask for stock symbol
                string stockSymbol;
                cout << "Please enter a stock symbol to analyze: ";
                cin >> stockSymbol;

                // Construct the URL for the stock chart (replace with actual URL structure)
                string url = "https://yourchartprovider.com/chart/" + stockSymbol; // Update this line

                // Open the stock chart in the browser
                openBrowser(url);

                // Additional step for analyzing a dip in Alpaca
                cout << "To analyze a chart for a dip in Alpaca, follow these steps:" << endl;
                cout << "   a. Log in to your Alpaca account." << endl;
                cout << "   b. Navigate to the 'Markets' section." << endl;
                cout << "   c. Select the stock or cryptocurrency you want to analyze." << endl;
                cout << "   d. Use the charting tools to visualize price movements." << endl;
                cout << "   e. Look for price dips and consider your investment strategy." << endl;
            } else {
                cout << "Please log into your trading account to proceed." << endl;
            }
        } else {
            cout << "You will need API keys to fetch data from your trading platform." << endl;
        }
    } else {
        cout << "That's okay! You can always research stocks or cryptocurrencies later." << endl;
    }

    // End of the program
    cout << "Thank you for using The Daily Income Maker!" << endl;
    return 0;
}