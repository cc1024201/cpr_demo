#include <cpr/cpr.h>
#include <iostream>

int main() {
    cpr::Response r = cpr::Get(cpr::Url{"https://api.github.com/repos/whoshuu/cpr/contributors"});
    std::cout << "Status code: " << r.status_code << std::endl;
    std::cout << "Content type: " << r.header["content-type"] << std::endl;
    std::cout << "Text: " << r.text << std::endl;
    return 0;
}