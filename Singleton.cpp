#include <iostream>
#include <map>
#include <string>
using namespace std;

class AppConfig {
private:
    map<string, string> appState;
    AppConfig() {
        cout << "AppConfig constructor called" << endl;
    }
    static AppConfig* instance;

public:
    static AppConfig* getInstance() {
        if (instance == nullptr) {
            instance = new AppConfig();
        }
        return instance;
    }
    void set(const string& key, const string& value) {
        appState[key] = value;
    }
    string get(const string& key) {
        return appState[key];
    }
};

AppConfig* AppConfig::instance = nullptr;() {
    AppConfig* appConfig = AppConfig::getInstance();
    appConfig->set("appTitle", "My Game");
    appConfig->set("appVersion", "2.1");
    cout << "Welcome to " << appConfig->get("appTitle") << " (Version " << appConfig->get("appVersion") << ")" << endl;
    return 0;
}