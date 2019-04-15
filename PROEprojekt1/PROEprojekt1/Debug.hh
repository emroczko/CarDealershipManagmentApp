#pragma once

#ifdef _DEBUG
#define _DEBUG(x) { cout << FILE << "(" << LINE << "): " << x << endl;
#else
    #define _DEBUG(x)
#endif                                                  // _DEBUG


