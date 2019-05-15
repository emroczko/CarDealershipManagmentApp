#pragma once
#ifndef _DEBUG
    #define DEBUG_LOG(a) std::cout<<__FILE__<<"("<<__LINE__<<"): "<< a << std::endl<<std::endl;
#else
    #define DEBUG_LOG(a)
#endif
