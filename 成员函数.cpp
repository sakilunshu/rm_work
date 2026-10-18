#include <iostream> //引入输入输出留库
#include <windows.h>//引入系统库，解决乱码
using namespace std;//使用标准命名空间
//定义一个叫MyClass的类
class MyClass{
    public://声明下面的函数是公共的
    //定义成员函数fun 接收一个数组和数组长度
        void fun (int arr[],int n){
            if (n<=0)//安全检查，防止空数组
            return;//结束这个函数

            int minindex = 0;//定义一个最小值下标，先定义第一个是最小的下标
            //从第一个元素开始遍历到最后一个元素（n-1)
            for (int i=1;i<n;i++){
                //如果当前遍历的数字比我们记录的最小值还要小
                if(arr[i]<arr[minindex]){
                    minindex = i;//那就更新计入，最小的数字是现在这个
                }
            }

            int temp = arr[minindex];//因为cpp很麻烦，所以要用一个空名来借代最小数字，进行交换位置
            arr[minindex] = arr[n-1];
            arr[n-1]=temp;
        }
    };

int main(){
    SetConsoleOutputCP(65001); //强制windows使用utf-8编码，防止乱码

    int n;//定义一个变量n，来存数组长度
    cout<<"请输入数组长度n:";//在屏幕上打提示语
    cin>>n;//等待用户输入一个数字并赋值给n

    int arr[1000];//创建一个足够大的数组

    cout << "请输入 " << n << " 个数字: " << endl;//提示语
    //开始读取用户输入的数字
    for(int i=0;i<n;i++){//读取一个数字，存在数组对应i的位置
        cin>>arr[i];
        //为了应付带逗号的输入
        if(i!= n-1){//如果现在度的不是最后一个数字
            char ch;//定义一个字符变量ch
            cin >> ch;//读取那个逗号 就存在ch里
            //cin.peel()就是‘偷看’下一个字符，但是不把他读走
            if (cin.peek()==' '){//如果偷看到都好后面紧跟着空格
                cin.get();//就把这个扣个也读走扔掉
            }
        }
    }

    MyClass obj;//实例化对象：根据myclass造一个叫obj的实体变量
    obj.fun(arr,n);//调用obj对象的fun函数，把数组arr和长度n交给他处理（去交换位置）

    cout << "交换后的结果是: ";//提示语
    //遍历所有数组
    for(int i=0;i<n;i++){
        cout << arr[i]<<", ";//打印数组
    }
    cout << endl;//换行符

    return 0;
}
