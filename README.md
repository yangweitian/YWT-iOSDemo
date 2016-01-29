# YWT-iOSDemo
自我学习iOS用的

1. Application：这个group中放的是AppDelegate和一些系统常量及系统配置文件；
2. Base：一些基本父类，包括父ViewController和一些公用顶层自定义父类，其他模块的类一般都继承自这里的一些类；
3. MVC
	Model：系统中的实体，通过类来描述系统中的一些角色和业务，同时包含对应这些角色和业务的处理逻辑；
	View：系统中视图层，由于我比较喜欢通过代码实现界面，所以这里放的都是继承于UIView的视图，我将视图从ViewController中分离出来全部放在这里，这样能保持ViewController的精简；
	Controller：系统控制层，放置ViewController，均继承于Group ##3. Base中的BaseViewController或BaseTableViewController；
4. Handler：系统业务逻辑层，负责处理系统复杂业务逻辑，上层调用者是ViewController；
5. Storage：简单数据存储，主要是一些键值对存储及系统外部文件的存取，包括对NSUserDefault和plist存取的封装；
6. Network：网络处理层(RTHttpClient)，封装了基于AFNetworking的网络处理层，通过block实现处理结果的回调，上层调用者是Handler层；
7. Database：数据层，封装基于FMDB的sqlite数据库存取和管理(RTDatabaseHelper)，对外提供基于Model层对象的调用接口，封装对数据的存储过程。
8. Utils：系统工具类(AppUtils)，主要放置一些系统常用工具类；
9. Categories：类别，对现有系统类和自定义类的扩展；
10. Resource：资源库，包括图片，plist文件等；
