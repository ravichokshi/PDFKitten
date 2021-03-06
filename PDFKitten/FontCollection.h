#import <Foundation/Foundation.h>
#import "Font.h"

@interface FontCollection : NSObject {
	NSMutableDictionary *fonts;
}

/* Initialize with a font collection dictionary */
- (id)initWithFontDictionary:(CGPDFDictionaryRef)dict;

/* Return the specified font */
- (Font *)fontNamed:(NSString *)fontName;

@property (nonatomic, readonly) NSDictionary *fontsByName;
@end
