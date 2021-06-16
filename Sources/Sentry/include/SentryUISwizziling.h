#import "SentryDefines.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#if SENTRY_HAS_UIKIT

/**
 * Class is responsible to swizzle UI key methods
 * so Sentry can track UI performance.
 */
@interface SentryUISwizziling : NSObject

+ (void)start;

@end

#endif

NS_ASSUME_NONNULL_END
