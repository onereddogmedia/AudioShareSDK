// AudioShareSDK.h
// Copyright (C)2012 Jonatan Liljedahl

#import <Foundation/Foundation.h>

@interface AudioShare : NSObject <UIAlertViewDelegate>

typedef void(^AudioShareImportBlock)(NSString *path);

+ (AudioShare*) sharedInstance;

// Export to AudioShare
- (BOOL) addSoundFromPath:(NSString*)path withName:(NSString*)name;
- (BOOL) addSoundFromURL:(NSURL*)url withName:(NSString*)name;
- (BOOL) addSoundFromData:(NSData*)data withName:(NSString*)name;

// Import from AudioShare
- (BOOL) initiateSoundImport;
- (BOOL) checkPendingImport:(NSURL*)url withBlock:(AudioShareImportBlock)block;

@end