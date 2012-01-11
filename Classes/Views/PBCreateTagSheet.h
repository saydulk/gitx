//
//  PBCreateTagSheet.h
//  GitX
//
//  Created by Nathan Kinsinger on 12/18/09.
//  Copyright 2009 Nathan Kinsinger. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "PBGitRefish.h"
#import "RJModalRepoSheet.h"

@class PBGitRepository;


@interface PBCreateTagSheet : RJModalRepoSheet {
	id <PBGitRefish> targetRefish;

	NSTextField *tagNameField;
	NSTextView  *tagMessageText;
	NSTextField *errorMessageField;
}

+ (void) beginCreateTagSheetAtRefish:(id <PBGitRefish>)refish inRepository:(PBGitRepository *)repo;

- (IBAction) createTag:(id)sender;
- (IBAction) closeCreateTagSheet:(id)sender;

@property  id <PBGitRefish> targetRefish;

@property  IBOutlet NSTextField *tagNameField;
@property  IBOutlet NSTextView  *tagMessageText;
@property  IBOutlet NSTextField *errorMessageField;

@end
