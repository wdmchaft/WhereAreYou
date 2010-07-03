

@interface WAYErrorMessageControl : UIControl {
    UILabel *textLabel;
    UIImageView *imageView;
}

@property (nonatomic, retain) IBOutlet UILabel *textLabel;
@property (nonatomic, readonly, retain) IBOutlet UIImageView *imageView;

@end
