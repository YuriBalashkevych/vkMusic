//
//  BYPlayerViewController.h
//  vkMusiс
//
//  Created by George on 11.02.15.
//  Copyright (c) 2015 George. All rights reserved.
//

#import "SongsListTableViewController.h"
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import "Song.h"

@interface PlayerViewController : UIViewController

@property (strong, nonatomic) Song*               currentSong;


@property (strong, nonatomic) NSArray*              songs;
@property (strong, nonatomic) AVPlayer*             player;

@property (weak, nonatomic) IBOutlet UIButton*      playButton;
@property (weak, nonatomic) IBOutlet UIButton*      playBackButton;
@property (weak, nonatomic) IBOutlet UIButton*      playForwardButton;
@property (weak, nonatomic) IBOutlet UIButton*      titleButton;
@property (weak, nonatomic) IBOutlet UIButton*      returnButton;
@property (weak, nonatomic) IBOutlet UIButton*      moveButton;

@property (weak, nonatomic) IBOutlet UISlider*      currentTimeSlider;

@property (weak, nonatomic) IBOutlet UILabel*       beginTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel*       endTimeLabel;

@property (weak, nonatomic) IBOutlet UITextView*    lyicsTextView;

@property (weak, nonatomic) IBOutlet UIImageView*   backgroundImageView;


- (IBAction)actionPlaySong:(UIButton*)sender;
- (IBAction)actionPlayBackAndForward:(UIButton*)sender;
- (IBAction)actionChangeCurrentTime:(UISlider*)sender;
- (IBAction)actionMoveAndReturn:(UIButton*)sender;

@end
