module CreateNavigation = (Config: {type route;}) => {
  include StackNavigator.CreateStackNavigator(Config);
};

module Animation = {
  include Animation;
};