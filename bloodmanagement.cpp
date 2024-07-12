
// #include <iostream>
// #include <string>
// using namespace std;
// #define MAX_EVENTS 999

// struct Event {
//     string name;
//     int attendees;
// };

// class EventManager {
// private:
//     Event* events[MAX_EVENTS];
//     int count;
//     static int nextEventId;

// public:
//     EventManager() : count(0) {}

//     void addEvent(std::string name, int attendees = 0) {
//         Event* event = new Event;
//         event->name = name;
//         event->attendees = attendees;
//         events[count++] = event;
//     }

//     static int getNextEventId() {
//         return nextEventId++;
//     }

//     friend void displayEvents(EventManager& manager);

//     ~EventManager() {
//         for (int i = 0; i < count; i++) {
//             delete events[i];
//         }
//     }
// };

// int EventManager::nextEventId = 1;

// void displayEvents(EventManager& manager) {
//     for (int i = 0; i < manager.count; i++) {
//         std::cout << "Name: " << manager.events[i]->name << ", Attendees: " << manager.events[i]->attendees << "\n";
//     }
// }

// class ExtendedEventManager : public EventManager {
// public:
//     void addMultipleEvents(int n, std::string name, int attendees) {
//         for (int i = 0; i < n; i++) {
//             addEvent(name, attendees);
//         }
//     }
// };

// int main() {
//     ExtendedEventManager manager;
//     int choice, n, attendees;
//     std::string name;

//     while (true) {
//         cout << "1. Add Event\n";
//         cout << "2. Add Multiple Events\n";
//         cout << "3. Display Events\n";
//         cout << "4. Display Next Event ID\n";
//         cout << "5. Exit\n";
//     cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter name and attendees: ";
//             cin >> name >> attendees;
//             manager.addEvent(name, attendees);
//             break;
//         case 2:
//             cout << "Enter number of events, name and attendees: ";
//             cin >> n >> name >> attendees;
//             manager.addMultipleEvents(n, name, attendees);
//             break;
//         case 3:
//             displayEvents(manager);
//             break;
//         case 4:
//             cout << "Next Event ID: " << EventManager::getNextEventId() << "\n";
//             break;
//         case 5:
//             return 0;
//         default:
//             cout << "Invalid choice\n";
//         }
//     }

//     return 0;
// }
#include<iostream>
using namespace std;