#include "R5AbilityTask_WaitTargetData.h"
#include "Templates/SubclassOf.h"

UR5AbilityTask_WaitTargetData::UR5AbilityTask_WaitTargetData() {
    this->TargetDataProducer = NULL;
    this->TargetDataPreview = NULL;
}

void UR5AbilityTask_WaitTargetData::OnLocalConfirm() {
}

void UR5AbilityTask_WaitTargetData::OnLocalCancel() {
}

UR5AbilityTask_WaitTargetData* UR5AbilityTask_WaitTargetData::NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, ER5WaitTargetDataConfirmationType ConfirmationType, bool bFinishOnConfirmation, ER5WaitTargetDataServerMode ServerMode, bool bCancelable, TSubclassOf<UR5TargetDataProducer> ProducerClass, TSubclassOf<AR5TargetDataPreview> PreviewClass) {
    return NULL;
}

UR5TargetDataProducer* UR5AbilityTask_WaitTargetData::GetProducer() const {
    return NULL;
}

AR5TargetDataPreview* UR5AbilityTask_WaitTargetData::GetDataPreview() const {
    return NULL;
}


