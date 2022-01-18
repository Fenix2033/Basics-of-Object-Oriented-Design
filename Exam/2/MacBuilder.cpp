//
// Created by xkudla on 17.01.2022.
//

#include "MacBuilder.h"

MacBuilder::MacBuilder() {
    m_mac = nullptr;
}

void MacBuilder::creatMac(int unikatneCislo, int pamet) {
    m_mac = new Mac(unikatneCislo, pamet);
}

Mac* MacBuilder::getMac() {
    return m_mac;
}