/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCSTYLEDITEM_H
#define IFC2X3_IFCSTYLEDITEM_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include "ifc2x3/IfcRepresentationItem.h"
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;

    /**
     */
    class IFC2X3_DLL_DEF IfcStyledItem : public IfcRepresentationItem {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Item'.
         * 
         */
        virtual IfcRepresentationItem *getItem();
        /**
         * (const) Returns the value of the explicit attribute 'Item'.
         * 
         * @return the value of the explicit attribute 'Item'
         */
        virtual const IfcRepresentationItem *getItem() const;
        /**
         * Sets the value of the explicit attribute 'Item'.
         * 
         * @param value
         */
        virtual void setItem(const Step::RefPtr< IfcRepresentationItem > &value);
        /**
         * Gets the value of the explicit attribute 'Styles'.
         * 
         */
        virtual Set_IfcPresentationStyleAssignment_1_n &getStyles();
        /**
         * (const) Returns the value of the explicit attribute 'Styles'.
         * 
         * @return the value of the explicit attribute 'Styles'
         */
        virtual const Set_IfcPresentationStyleAssignment_1_n &getStyles() const;
        /**
         * Sets the value of the explicit attribute 'Styles'.
         * 
         * @param value
         */
        virtual void setStyles(const Set_IfcPresentationStyleAssignment_1_n &value);
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStyledItem(Step::Id id, Step::SPFData *args);
        virtual ~IfcStyledItem();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStyledItem &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcRepresentationItem > m_item;
        /**
         */
        Set_IfcPresentationStyleAssignment_1_n m_styles;
        /**
         */
        Step::String m_name;

    };

}

#endif // IFC2X3_IFCSTYLEDITEM_H
