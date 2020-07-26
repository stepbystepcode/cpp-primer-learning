#include <iostream>
int main(){
  std::cout << "Wrong comments test.\n";/*  /*Wrong comments test.*/Wrong comments test.   */
}
/*test1.cpp:3:45: warning: "/*" within comment [-Wcomment]
 * std::cout << "Wrong comments test.\n";/*  /*Wrong comments test.*/Wrong comments test.   */
 *                                            ^
 *test1.cpp: In function 'int main()':
 *test1.cpp:3:69: error: 'Wrong' was not declared in this scope
 *  std::cout << "Wrong comments test.\n";/*  /*Wrong comments test.*/Wrong comments test.   */
 *                                                                     ^
 */home/peter/Documents/c++/run.sh:行5: ./test1.out: 没有那个文件或目录*/

