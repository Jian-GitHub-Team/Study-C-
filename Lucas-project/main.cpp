#include <iostream>
using namespace std;

class Solution {
    public:
    int* arr1, *arr2;
    int arrSize1, arrSize2, target; //增加目标值可由用户自定义
    void inputNum() {
        cout << "请输入数组arr1的长度：";
        cin >> arrSize1;
        arr1 = new int[arrSize1];
        for(int i = 0; i < arrSize1; i++) {
            cout << "第" << i+1 << "个元素,请输入：";
            cin >> arr1[i];
        }
        cout << "arr1[" << arrSize1 << "]={";
        for(int i = 0; i < arrSize1; i++) {
            cout << " " << arr1[i] << " ";
        }
        cout << "}" << endl;
        cout << "========" << endl;

        cout << "请输入数组arr2的长度：";
        cin >> arrSize2;
        arr2 = new int[arrSize2];
        for(int j = 0; j < arrSize2; j++) {
            cout << "第" << j+1 << "个元素,请输入：";
            cin >> arr2[j];
            // cin.ignore();
        }
        cout << "arr1[" << arrSize2 << "]={";
        for(int j = 0; j < arrSize2; j++) {
            cout << " " << arr2[j] << " ";
        }
        cout << "}" << endl;
        cout << "========" << endl;

        cout << "请输入目标值：";
        cin >> target;

        cout << endl << "=计算结果=" << endl;
    }
    void isNum(const int* arr1,const int* arr2, const int arrSize1, const int arrSize2) const {
        bool found = false;
        for (int i = 0; i < arrSize1; i++) {
            for (int j = 0; j < arrSize2; j++) {
                if (arr1[i] + arr2[j] == target) {
                    cout << "arr1["<<i<<"]+arr2["<<j<<"]=" << target << endl;
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "数组中元素相加都不等于" << target << endl;
        }
    }
};

int main() {
    Solution cal;
    cal.inputNum();
    cal.isNum(cal.arr1, cal.arr2, cal.arrSize1, cal.arrSize2);
}
