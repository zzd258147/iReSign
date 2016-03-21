//
//  iReSignAppDelegate.h
//  iReSign
//
//  Created by Maciej Swic on 2011-05-16.
//  Copyright (c) 2011 Maciej Swic, Licensed under the MIT License.
//  See README.md for details
//

#import <Cocoa/Cocoa.h>
#import "IRTextFieldDrag.h"

@interface iReSignAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *__unsafe_unretained window;
    
    NSUserDefaults *defaults;
    
    NSTask *unzipTask;
    NSTask *copyTask;
    NSTask *provisioningTask;
    NSTask *codesignTask;
    NSTask *generateEntitlementsTask;
    NSTask *verifyTask;
    NSTask *zipTask;
    NSString *sourcePath;
    NSString *appPath;
    NSString *frameworksDirPath;
    NSString *frameworkPath;
    NSString *workingPath;
    NSString *appName;
    NSString *fileName;
    NSString *entitlementsDirPath;
    NSString *entitlementsFilePath;
    
    NSString *entitlementsResult;
    NSString *codesigningResult;
    NSString *verificationResult;
    
<<<<<<< dbfc81580c0bf4dd866ff1f9bb22d3338548927b
<<<<<<< 9d0e66174eecbb639b33f0315a9808da9779b440
    NSMutableArray *additionalResourcesToSign;
    Boolean additionalToSign;
=======
    NSMutableArray *frameworks;
    Boolean hasFrameworks;
>>>>>>> Make it work with Frameworks.
=======
    NSMutableArray *additionalResourcesToSign;
    Boolean additionalToSign;
>>>>>>> Sign plugins and additional executable files. When generating entitlements.plist, do it in a different working folder and don't show path in the UI
    
    IBOutlet IRTextFieldDrag *pathField;
    IBOutlet IRTextFieldDrag *provisioningPathField;
    IBOutlet IRTextFieldDrag *entitlementField;
    IBOutlet IRTextFieldDrag *bundleIDField;
    IBOutlet NSButton    *browseButton;
    IBOutlet NSButton    *provisioningBrowseButton;
    IBOutlet NSButton *entitlementBrowseButton;
    IBOutlet NSButton    *resignButton;
    IBOutlet NSTextField *statusLabel;
    IBOutlet NSProgressIndicator *flurry;
    IBOutlet NSButton *changeBundleIDCheckbox;
    
    IBOutlet IRTextFieldDrag *displayNameField;
    IBOutlet NSButton *changeDisplayNameCheckbox;
    
    IBOutlet IRTextFieldDrag *versionField;
    IBOutlet NSButton *changeVersionCheckbox;
    
    IBOutlet NSComboBox *certComboBox;
    NSMutableArray *certComboBoxItems;
    NSTask *certTask;
    NSArray *getCertsResult;
    
    NSString *_newBundleId;
}

@property (unsafe_unretained) IBOutlet NSWindow *window;

- (IBAction)resign:(id)sender;
- (IBAction)browse:(id)sender;
- (IBAction)provisioningBrowse:(id)sender;
- (IBAction)entitlementBrowse:(id)sender;
- (IBAction)changeBundleIDPressed:(id)sender;
- (IBAction)changeDisplayNamePressed:(id)sender;
- (IBAction)changeVersionPressed:(id)sender;

- (void)checkUnzip:(NSTimer *)timer;
- (void)checkCopy:(NSTimer *)timer;
- (void)doProvisioning;
- (void)checkProvisioning:(NSTimer *)timer;
- (void)doCodeSigning;
- (void)checkCodesigning:(NSTimer *)timer;
- (void)doVerifySignature;
- (void)checkVerificationProcess:(NSTimer *)timer;
- (void)doZip;
- (void)checkZip:(NSTimer *)timer;
- (void)disableControls;
- (void)enableControls;

@end
