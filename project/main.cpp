#include <iostream>
#include "ManagerInventory.h"
#include "MockData.h"
#include "Controller.h"

using namespace std;

int main() {

    ManagerInventory manager_inventory("Oficina do Diamantino");

    MockData mock;
    mock.generateData(manager_inventory);

    Controller controller(manager_inventory);
    controller.run();
    cout << "Application has exited" << endl;
    return 0;
}
