//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Bridge : NSObject
- (UIImage*)DrawKeypoints:(UIImage*) source;
- (uint32_t)ExtractFeatures:(UIImage*) source;
@end


