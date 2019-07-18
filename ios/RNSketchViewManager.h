
#if __has_include("RCTViewManager.h")
#import "RCTViewManager.h"
#else
#import <React/RCTViewManager.h>
#endif

#import "SketchView/SketchViewContainer.h"

@interface RNSketchViewManager : RCTViewManager

@property SketchViewContainer *sketchViewContainer;

@end
  
