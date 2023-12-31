class ScreenPrintStrategy: public PrintStrategy {
    public:
    void print(const Document& document) override {
        std::cout << document.get() << std::endl;
    }
};
class StringPrintStrategy: public PrintStrategy {
    public:
    std::string text;
    int n = 0;
    StringPrintStrategy(){}
    void print(const Document& document) override {
        n += 1;
        text += "--- doc " + std::to_string(n) + " ---\n"
            + document.get() + "\n";
    }
    std::string getPrintedDocuments() { return text; }
};
class MockPrintStrategy: public PrintStrategy {
    public:
    int n = 0;
    MockPrintStrategy(){}
    void print(const Document& document) override { n += 1; }
    int getPrintedDocumentsCount() { return n; }
};