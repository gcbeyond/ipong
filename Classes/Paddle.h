#import "cocos2d.h"
#import "Box2D.h"
#import <Foundation/Foundation.h>


@interface Paddle : NSObject {
    CCSprite* Sprite;
    b2Body* Body;
    b2Fixture* Fixture;
}

@property(readonly,assign) CCSprite* Sprite;
@property(readonly,assign) b2Body* Body;
@property(readonly,assign) b2Fixture* Fixture;

-(id) initWithWorld: (b2World*) world;
-(BOOL) testPoint: (b2Vec2) point;
-(void)dealloc;
@end