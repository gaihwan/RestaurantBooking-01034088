#include <iostream>
#include "sms_sender.cpp"

class TestableSmsSender : public SmsSender {
public:
    void send(Schedule* schedule) override {
        std::cout << "�׽�Ʈ�� SmsSender class�� send �޼��� �����" << std::endl;
        sendMethodIsCalled = true;
    }
    bool isSendMethodIsCalled() const {
        return sendMethodIsCalled;
    }

private:
    bool sendMethodIsCalled;
};