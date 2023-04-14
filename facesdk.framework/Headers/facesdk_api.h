#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

enum SDK_ERROR
{
    SDK_SUCCESS = 0,
    SDK_LICENSE_KEY_ERROR = -1,
    SDK_LICENSE_APPID_ERROR = -2,
    SDK_LICENSE_EXPIRED = -3,
    SDK_NO_ACTIVATED = -4,
    SDK_INIT_ERROR = -5,
};

@interface FaceBox : NSObject

@property (nonatomic) int x1;
@property (nonatomic) int y1;
@property (nonatomic) int x2;
@property (nonatomic) int y2;
@property (nonatomic) float liveness;
@property (nonatomic) float yaw;
@property (nonatomic) float roll;
@property (nonatomic) float pitch;
@end

@interface FaceSDK : NSObject

+(int) setActivation: (NSString*) license;
+(int) initSDK;
+(NSMutableArray*) faceDetection: (UIImage*) image;

@end

NS_ASSUME_NONNULL_END
