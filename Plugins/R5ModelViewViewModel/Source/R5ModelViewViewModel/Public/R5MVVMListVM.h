#pragma once
#include "CoreMinimal.h"
#include "R5MVVMListComparatorData.h"
#include "R5MVVMListFilterData.h"
#include "R5MVVMViewModel.h"
#include "R5MVVMListVM.generated.h"

class UR5MVVMListEntityVM;
class UR5MVVMPoolableView;

UCLASS(Abstract, Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMListVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnSelectedListEntityChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnSelectedListEntityChanged OnSelectedListEntityChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMListEntityVM*> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMPoolableView*> ViewList;
    
public:
    UR5MVVMListVM();

    UFUNCTION(BlueprintCallable)
    void UnselectAll();
    
    UFUNCTION(BlueprintCallable)
    void Unselect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UR5MVVMListEntityVM*> SortList(const TArray<UR5MVVMListEntityVM*>& ListToSort, const FR5MVVMListComparatorData& Comparator);
    
    UFUNCTION(BlueprintCallable)
    void Select(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPoolableList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedEntity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MVVMPoolableView*> GetViewList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MVVMListEntityVM*> GetSortedList(const FR5MVVMListComparatorData& Comparator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MVVMListEntityVM* GetSelectedEntity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MVVMListEntityVM*> GetListWithFilter(const FR5MVVMListFilterData& FiltersContainer, bool bMustFulfillAllRequirements) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5MVVMListEntityVM*> GetList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MVVMListEntityVM* GetEntity(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEntitiesCount() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UR5MVVMListEntityVM*> FilterList(const TArray<UR5MVVMListEntityVM*>& ListToFilter, const FR5MVVMListFilterData& FiltersContainer, bool bMustFulfillAllRequirements);
    
};

