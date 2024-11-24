import Single;
import Group;


int main() {
    // From single export
    SingleClass single{};
    SingleFunction();

    // From group export
    GroupClass1 group1{};
    GroupClass2 group2{};
    GroupFunction1();
    GroupFunction2();
    GroupFunction3();

    return 0;
}