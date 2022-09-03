<p align="center"><img src="https://img.shields.io/badge/ONLY%20-GERMAIN-blue?style=for-the-badge&logo=appveyor" height="50"></p>
<p align="center"><img src="https://img.shields.io/github/issues/AitzazImtiaz/Germain?style=social&logo=appveyor"><img src="https://img.shields.io/github/forks/AitzazImtiaz/Germain?style=social&logo=appveyor"> <img src="https://img.shields.io/github/stars/AitzazImtiaz/Germain?style=social&logo=appveyor"><img src="https://img.shields.io/github/license/AitzazImtiaz/Germain?style=social&logo=appveyor"> <img src="https://img.shields.io/twitter/url?url=https%3A%2F%2Fgithub.com%2FAitzazImtiaz%2FGermain"></p>

<img align="right" src="https://github.com/AitzazImtiaz/Public-Images/blob/main/OIP%20(1).png">

This is Sophie Germain, the founder of the Sophie Germain Prime numbers, and this library is dedicated specifically in an honour to her, Her research had made a impact on  modern Cryptography and made the workflows stronger. Primarily, she was self-taught, and would read books from her father's library, and this library specifically implements her Prime Numbers, as the library lists down list of her Prime numbers below any user specified number. The library has typical "int" limitations unfortunately and is suitable for low numbers only, and so is not an application supporting infinite numbers. 

Here is how to use this library:

```
#inlude "germain.h"
#include <iostream>

using namespace std;

int main(){
  int n, result;
  cin >> n;
  result = germain_main(n);
  cout << result;
  return 0;
}
```

Sorry, but Germain is a ```.dll``` library and will only support Windows XP and later. It was not made for Linux and Mac, a solution is Wine for Linux or try converting ```.dlll``` to a ```.so``` file.

Germain is a simple library, and does not have standard use in a code, other then the scenario of finding Germain numbers at a Windows processor speed, an alternative made is [here](github.com/AitzazImtiaz/ImtiazGermain).
