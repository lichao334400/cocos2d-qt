#include "CCMenuItemImageLoader.h"

USING_NS_CC;
USING_NS_CC_EXT;

#define PROPERTY_NORMALDISPLAYFRAME "normalSpriteFrame"
#define PROPERTY_SELECTEDDISPLAYFRAME "selectedSpriteFrame"
#define PROPERTY_DISABLEDDISPLAYFRAME "disabledSpriteFrame"

void CCMenuItemImageLoader::onHandlePropTypeSpriteFrame(CCNode * pNode, CCNode * pParent, CCString * pPropertyName, CCSpriteFrame * pCCSpriteFrame, CCBReader * pCCBReader) {
    if(pPropertyName->compare(PROPERTY_NORMALDISPLAYFRAME) == 0) {
        if(pCCSpriteFrame != NULL) {
            ((CCMenuItemImage *)pNode)->setNormalSpriteFrame(pCCSpriteFrame);
        }
    } else if(pPropertyName->compare(PROPERTY_SELECTEDDISPLAYFRAME) == 0) {
        if(pCCSpriteFrame != NULL) {
            ((CCMenuItemImage *)pNode)->setSelectedSpriteFrame(pCCSpriteFrame);
        }
    } else if(pPropertyName->compare(PROPERTY_DISABLEDDISPLAYFRAME) == 0) {
        if(pCCSpriteFrame != NULL) {
            ((CCMenuItemImage *)pNode)->setDisabledSpriteFrame(pCCSpriteFrame);
        }
    } else {
        CCMenuItemLoader::onHandlePropTypeSpriteFrame(pNode, pParent, pPropertyName, pCCSpriteFrame, pCCBReader);
    }
}