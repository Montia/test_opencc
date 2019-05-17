#include <iostream>
#include <string>

#include "opencc/src/opencc.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    opencc_t opencc_s2t = opencc_open(NULL);
    opencc_t opencc_t2s = opencc_open(OPENCC_DEFAULT_CONFIG_TRAD_TO_SIMP);

    string req_type, query;
    cin >> req_type >> query;
    
    if (req_type == "t2s")
        cout << opencc_convert_utf8(opencc_t2s, query.c_str(), query.size()) << endl;
    else
        cout << opencc_convert_utf8(opencc_s2t, query.c_str(), query.size()) << endl;

    opencc_close(opencc_s2t);
    opencc_close(opencc_t2s);
    return 0;
}
