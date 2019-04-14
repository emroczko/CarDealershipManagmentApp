#ifndef DEBUG_H_
#define DEBUG_H_

#ifdef _DEBUG
    #define DEBUG_LOG(a) std::cout << __FILE__ << "(" << __LINE__ << "): " << a << std::endl;
#else
    #define DEBUG_LOG(a)
#endif                                                  // _DEBUG

#endif                                                  // DEBUG_H_
