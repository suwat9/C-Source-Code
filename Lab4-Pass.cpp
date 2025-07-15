#include <iostream>
#include <cstdlib>

int main() {
    std::string wifiName;
    std::cout << "Enter the Wi-Fi network name (SSID): ";
    std::getline(std::cin, wifiName);

    std::string command = "netsh wlan show profile name=\"" + wifiName + "\" key=clear";
    system(command.c_str());

    return 0;
}
