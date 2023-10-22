bool compare(std::string a, std::string b) {

    int first = std::stoi(a);
    int second = std::stoi(b);
    int first1 = first;
    int second1 = second;
    int count1 = 0;
    int count2 = 0;
    //считаем единички
    while (first1 > 0) {
        count1 += first1 % 10;
        first1 /= 10;
    }
    while (second1 > 0) {
        count2 += second1 % 10;
        second1 /= 10;
    }
    if (count1 == count2) {
        return first < second;
    }
    return count1 > count2;


}