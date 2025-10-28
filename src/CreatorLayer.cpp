#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>
#include "ListManager.h"

using namespace geode::prelude;

class $modify(CreatorLayer) {
    bool init() {
        CreatorLayer::init();
        ListManager::isSupremeSearching = false;
        return true;
    }
};