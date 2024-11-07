# ofxNumCpp

[NumCpp](https://github.com/dpilger26/NumCpp) for openFrameworks (tested on v0.12.0, NumCpp version: 2.12.1)

## Usage

See [example](example). (Please use `projectGenerator` before run it)

```cpp
#include "ofApp.h"

#define NUMCPP_NO_USE_BOOST 1

#include "NumCpp.hpp"

void ofApp::setup(){
    ofLogToConsole();

    nc::NdArray<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> a_as_vector = a.toStlVector();
    auto sum = nc::sum(a);
    float sum_as_float = sum.item();
    ofLogNotice("ofApp") << "a = " << a;
    ofLogNotice("ofApp") << "a_as_vector = " << ofToString(a_as_vector);
    ofLogNotice("ofApp") << "sum = " << sum;
    ofLogNotice("ofApp") << "sum_as_float = " << sum_as_float;

    // matrix multiplication
    nc::NdArray<int> a1 = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    nc::NdArray<int> a2 = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
    auto dotted = nc::dot(a1, a2);
    ofLogNotice("ofApp") << "a1 = " << endl << a1;
    ofLogNotice("ofApp") << "a2 = " << endl << a2;
    ofLogNotice("ofApp") << "dot(a1, a2) = " << endl << dotted;
}

// Result:
// [notice ] ofApp: a = [[1, 2, 3, 4, 5, 6, 7, 8, 9, ]]
// [notice ] ofApp: a_as_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9}
// [notice ] ofApp: sum = [[45, ]]
// [notice ] ofApp: sum_as_float = 45
//
// [notice ] ofApp: a1 =
// [[1, 2, 3, ]
// [4, 5, 6, ]
// [7, 8, 9, ]]
//
// [notice ] ofApp: a2 =
// [[9, 8, 7, ]
// [6, 5, 4, ]
// [3, 2, 1, ]]
//
// [notice ] ofApp: dot(a1, a2) =
// [[30, 24, 18, ]
// [84, 69, 54, ]
// [138, 114, 90, ]]
```

## LICENSE

- NumCpp: [MIT License](https://github.com/dpilger26/NumCpp/blob/Version_2.12.1/LICENSE)

NOTE: No specific copyright is claimed for this repository changes (for oF binding), but the [Apache License 2.0](LICENSE_APACHE) or [MIT License](LICENSE_MIT) can be applied if necessary.
