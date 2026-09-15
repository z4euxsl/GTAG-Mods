#include <jni.h>
#include <chrono>
#include <thread>
#include <unistd.h>

// btw the point of this is to make stupid shit for some ppl

// bool things

float armLength = 1.25f;
float armstep = 0.05f;
float armmin  = 0.75f;
float armmax  = 1.50f;

using namespace std;

// mirror enable (this is only used in older upds or something in GTAG)

void diddymirror () {
GameObject::Find("mirror (1)")->SetActive(true);
}

void increaseArmLengththing() {
    if (armLength < armmax) {
        armLength = std::min(armLength + armstep, armmax);
        auto* go = GameObject::Find("GorillaPlayer"); // finds the gorilla player  which is from UABEA
        if (go && go->GetTransform())
            go->GetTransform()->SetLocalScale({ armLength, armLength, armLength });
    }
}

//// TODO: nothing bitch.

void decreaseArmLengthThing() {
    if (armLength > armmin) {
        armLength = std::max(armLength - armstep, armmin);
        auto* go = GameObject::Find("GorillaPlayer");
        if (go && go->GetTransform())
            go->GetTransform()->SetLocalScale({ armLength, armLength, armLength });
    }
}

void linkthingidk() {
    Application::OpenUrl("yourlinkiguess");
}

// btw this might not even be updated, this is just for fun and barely has shit here :sob:
