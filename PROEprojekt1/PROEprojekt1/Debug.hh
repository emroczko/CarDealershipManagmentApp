/*#ifndef DEBUG_H_
#define DEBUG_H_

#define DEBUG

void log_debug(std::string file, int line, std::string log)
{
#ifdef DEBUG
    STD::cout <<
#endif
}

log_debug(__FILE__, __LINE__, "konstruktor klasy XYZ")

#ifdef _DEBUG
#define DEBUG_LOG(a) std::cout << __FILE__ << "(" << __LINE__ << "): " << a << std::endl;
#else
#define DEBUG_LOG(a)
#endif                                                  // _DEBUG

#endif                                             // DEBUG_H_
*/
