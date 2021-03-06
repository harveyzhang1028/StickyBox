//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//


#import <UIKit/UIKit.h>

#if DEBUG

@interface UIDynamicAnimator (HGDynamicAnimator)

/// Use this property for debug purposes when testing.
@property (nonatomic, getter=isDebugEnabled) BOOL debugEnabled;

@end

#endif
