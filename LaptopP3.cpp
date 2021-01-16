#include <iostream>
using namespace std;

class LaptopCls
{
public:
    string Processor; // intel i3 i5 i7 i9, AMD razon 3, 5, 7
    string Ram;       // 8gb/16gb ddr3/ddr4
    string Harddisk;  // 1TB HDD ,128Gb SSD
    float Screensize; //15.6 inch/16 inch
    bool Touchscreen; //yes or no
    string Brand;     //Hp/Dell/Lenovo/acer/asus

    //LaptopCls() {}

    LaptopCls(string ProcessorPsg,
              string RamPsg, string HarddiskPsg,
              float ScreensizePsg, bool TouchscreenPsg, string BrandPsg)
    {
        cout << "i am a Constructor" << endl; //It is default function which will be executed when you initialize the class
        Processor = ProcessorPsg;
        Ram = RamPsg;
        Harddisk = HarddiskPsg;
        Screensize = ScreensizePsg;
        Touchscreen = TouchscreenPsg;
        Brand = BrandPsg;
    }
    void displayFnc()
    {
        cout << "Processor \t:" << Processor << endl;
        cout << "Ram \t\t:" << Ram << endl;
        cout << "Harddisk \t:" << Harddisk << endl
             << endl;
    }
    string getModelFnc()
    {
        return Brand + " | " + Processor + " | " + Ram + " | " + Harddisk + " | " + to_string(Screensize) + "inches";
    }
};

class AlienWareCls : public LaptopCls
{
public:
    string Gpu; // Nvdia rtx series 2080

    AlienWareCls(){}
    

    AlienWareCls(string ProcessorPsg,
                 string RamPsg, string HarddiskPsg,
                 float ScreensizePsg, bool TouchscreenPsg, string BrandPsg, string GpuPsg)
    {

        // Processor = ProcessorPsg;
        // Ram = RamPsg;
        // Harddisk = HarddiskPsg;
        // Screensize = ScreensizePsg;
        // Touchscreen = TouchscreenPsg;
        // Brand = BrandPsg;

        LaptopCls::displayFnc();
        Gpu = GpuPsg;
        cout<<"Model :"<<LaptopCls::getModelFnc()<<endl;
    }

    AlienWareCls operator + (AlienWareCls AlienwareVar){
        AlienWareCls laptop1;
        laptop1.Ram = Ram + AlienwareVar.Ram;

        return laptop1;

    }
    void displayFnc()
    {
        cout << "Processor \t:" << Processor << endl;
        cout << "Ram \t\t:" << Ram << endl;
        cout << "Harddisk \t:" << Harddisk << endl;
        cout << "Gpu \t:" << Gpu << endl;
    }
};
int main()
{
    //object is a variable which can store an instance of a class
    //class is collection of functions/methods and properties/variables having similarities

    LaptopCls HpVar("Intel i7 10th Gen","16GB DDR4","1TB HDD,128GB SSD",16,true,"Hp envy X360");
    cout<<HpVar.getModelFnc()<<endl;
    HpVar.displayFnc();

    LaptopCls AcerVar("AMD RYZEN 5","8GB DDR4 ","1TB HDD",15.6,false,"Acer R7");
    cout<<AcerVar.getModelFnc()<<endl;
    AcerVar.displayFnc();

    AlienWareCls AlienWareVar("i9 18th Gen", "64GB DDR", "8TB HDD 1TB SDD", 16, false, "AlienWare", "RTX 2080");
    AlienWareVar.displayFnc();

    AlienWareCls AlienVar2("i9 18th Gen", "64GB DDR", "8TB HDD 1TB SDD", 16, false, "laptop 2222 AlienWare", "RTX 2080");
    AlienVar2.displayFnc();

    AlienWareCls AlienWare3 = AlienWareVar + AlienVar2;
    AlienWare3.displayFnc();

    // int num1 =8, num2 = 2;
    // int result = num1 + num2;
    // cout<<"Result is "<<result<<endl;

    // string txt1 = "123";
    // string txt2 ="234";
    // string res = txt1 + txt2;

    // cout<<res<<endl;

}