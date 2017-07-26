/*********************************************************************
 *           Copyright © 2017年 NightElf. All rights reserved.
 *                  Date                Name
 *                 17/2/4             Ruancanghui
 **********************************************************************
 * @文件名称: DDSearchTableViewModel.m
 * @文件描述: 包含view中变化的元素
 * @补充说明: 无
 *********************************************************************/

#import "DDSearchTableViewModel.h"
#import "DDSearchTableCellViewModel.h"

@implementation DDSearchTableViewModel

+ (DDSearchTableViewModel *)viewModelWithRecipes:(NSArray<Recipe *> *)recipes{
    DDSearchTableViewModel *vm = [[DDSearchTableViewModel alloc] init];
    NSMutableArray *cellViewModelArr = [[NSMutableArray alloc] init];
    for (Recipe *recipe in recipes) {
        DDSearchTableCellViewModel *vm = [DDSearchTableCellViewModel viewModelWithRecipe:recipe];
        [cellViewModelArr addObject:vm];
    }
    vm.cellViewModels = cellViewModelArr;
    vm.backgroundColor = [UIColor whiteColor];
    return vm;
}
@end
