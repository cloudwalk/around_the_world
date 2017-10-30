# Around The World

MRuby for non embedded platforms to be compliance with DaFunk API.

# Map

![Map](imgs/apps.jpg)


## Setup

1. Install Ruby and Bundler, check [here](https://rvm.io/rvm/install)
2. Install cloudwalk CLI, check [here](https://docs.cloudwalk.io/cli/setup)
3. Setup submodules `rake setup`
4. Create your own [build.rb](https://github.com/cloudwalkio/around_the_world/blob/master/build.rb), example [here](https://github.com/mruby/mruby/blob/1.1.0/build_config.rb).
5. Build `CONFIG=build.rb rake`
6. Check how to create and deploy the application in your new runtime on CloudWalk [docs](https://docs.cloudwalk.io/cli/creating-a-new-app).


## Contributing

1. Fork it
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Added some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create new Pull Request

